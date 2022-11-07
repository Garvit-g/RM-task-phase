using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Oracle.ManagedDataAccess.Client;
using Oracle.ManagedDataAccess.Types;

namespace db_proj1
{
    public partial class Form1 : Form
    {
        OracleConnection conn;
        OracleCommand comm;
        OracleDataAdapter da;
        DataSet ds;
        DataTable dt;
        DataRow dr;
        int i = 0;
        public Form1()
        {
            InitializeComponent();
        }

        public void DB_connect()
        {
               // String oradb = "Data Source=Oracle server name(orcl);
              //  User ID=Oracle login ID; Password=student";
               // conn = new OracleConnection(oradb);
              //  conn.Open();

            // String oradb = "Data Source=Oracle server name(orcl);
            //  User ID=Oracle login ID; Password=student";
            conn = new OracleConnection("DATA SOURCE=172.16.54.24:1521/ictorcl;USER ID=EXAM01;PASSWORD=student");
             conn.Open();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            DB_connect();
            comm = new OracleCommand();
            comm.CommandText = "select * from student";
            comm.CommandType = CommandType.Text;
            ds = new DataSet();
            da = new OracleDataAdapter(comm.CommandText, conn);
            da.Fill(ds, "Tbl_student");
            dt = ds.Tables["Tbl_student"];
            int t = dt.Rows.Count;
            MessageBox.Show(t.ToString());
            dr = dt.Rows[i];
            textBox1.Text = dr["regno"].ToString();
            textBox2.Text = dr["sname"].ToString();
            textBox3.Text = dr["mark"].ToString();
            
         //   conn.Close();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            
                DB_connect();
                OracleCommand command = conn.CreateCommand();
                command.CommandText = "select * from student";
                //command.ExecuteNonQuery();
                OracleDataReader dr = command.ExecuteReader();
                dr.Read();
                label1.Text = dr.GetString(0);

                command.Dispose();
                conn.Close();
          
        }

        private void button3_Click(object sender, EventArgs e)
        {
            i--;
            if (i < 0)
                i = dt.Rows.Count - 1;
            dr = dt.Rows[i];
            textBox1.Text = dr["regno"].ToString();
            textBox2.Text = dr["sname"].ToString();
            textBox3.Text = dr["mark"].ToString();


        }

        private void button4_Click(object sender, EventArgs e)
        {
            i++;
            if (i >= dt.Rows.Count)
                i = 0;
            dr = dt.Rows[i];
            textBox1.Text = dr["regno"].ToString();
            textBox2.Text = dr["sname"].ToString();
            textBox3.Text = dr["mark"].ToString();
        }

        private void button5_Click(object sender, EventArgs e)
        {
           /* DB_connect();
           
            OracleCommand comm1 = new OracleCommand();
            comm1.Connection = conn;
            comm.CommandText = "insert into student values("+ Int32.Parse(textBox1.Text) + ",  ’" + textBox2.Text + "’," +  Int32.Parse(textBox3.Text) +")";
            
            comm1.CommandType =CommandType.Text;
            comm1.ExecuteNonQuery();
            MessageBox.Show("Inserted!"); 
           conn.Close();*/

            DB_connect();
            int v = int.Parse(textBox1.Text);
            OracleCommand cm = new OracleCommand();
            cm.Connection = conn;
        
            cm.CommandText = "insert into student values(:pb,:pb2, :pdn)";
            
            cm.CommandType = CommandType.Text;
          
            OracleParameter pa1 = new OracleParameter();
            pa1.ParameterName = "pb";
            pa1.DbType = DbType.Int32;
            pa1.Value = v;

            OracleParameter pa2 = new OracleParameter();
            pa2.ParameterName = "pb2";
            pa2.DbType = DbType.String;
            pa2.Value = textBox2.Text;


             OracleParameter pa3 = new OracleParameter();
             pa1.ParameterName = "pdn";
            pa3.DbType = DbType.Int32;
            pa3.Value = textBox3.Text;

            cm.Parameters.Add(pa1);
            cm.Parameters.Add(pa2);
            cm.Parameters.Add(pa3);

            cm.ExecuteNonQuery();
            MessageBox.Show("inserted");
            conn.Close();



        }

        private void button7_Click(object sender, EventArgs e)
        {
               DB_connect();
    int v = int.Parse(textBox3.Text);
    OracleCommand cm = new OracleCommand();
    cm.Connection = conn;
    cm.CommandText = "update student  set mark=:pb where regno =:pdn";
    cm.CommandType =CommandType.Text;
    //Uses OracleParameter to read the parameter from the GUI 
    OracleParameter pa1 = new OracleParameter();
    pa1.ParameterName = "pb"; 
    pa1.DbType = DbType.Int32;
    pa1.Value = v;
    
            OracleParameter pa2 = new OracleParameter();
    pa2.ParameterName = "pdn";
    pa2.DbType = DbType.String;
    pa2.Value = textBox1.Text;

    cm.Parameters.Add(pa1);
    cm.Parameters.Add(pa2);
    cm.ExecuteNonQuery();
    MessageBox.Show("updated"); 
    conn.Close();
        }

        private void button8_Click(object sender, EventArgs e)
        {

            DB_connect();
            comm = new OracleCommand();
            comm.CommandText = "select * from student";
            comm.CommandType = CommandType.Text;
            da = new OracleDataAdapter(comm.CommandText, conn);
            DataSet ds = new DataSet();
            da.Fill(ds, "Student");
            dataGridView1.DataSource = ds.Tables["Student"].DefaultView; 
          
          

       
        
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            DB_connect();
            comm = new OracleCommand(); 
            comm.CommandText = "select regno from student";
            comm.CommandType = CommandType.Text;
            ds = new DataSet();
            da = new OracleDataAdapter(comm.CommandText, conn); 
                da.Fill(ds, "Tbl_stud");
            dt = ds.Tables["Tbl_stud"]; 
            int t = dt.Rows.Count;


            MessageBox.Show(t.ToString());
                comboBox1.DataSource = dt.DefaultView;
            comboBox1.DisplayMember = "regno"; // Database Table’ attribute name
       conn.Close();
        }

        private void button6_Click(object sender, EventArgs e)
        {

            DB_connect();
            int v = int.Parse(textBox1.Text);
            OracleCommand cm = new OracleCommand();
            cm.Connection = conn;

            cm.CommandText = "delete from  student  where regno =:pb";

            cm.CommandType = CommandType.Text;

            OracleParameter pa1 = new OracleParameter();
            pa1.ParameterName = "pb";
            pa1.DbType = DbType.Int32;
            pa1.Value = v;

           

            cm.Parameters.Add(pa1);
           
            cm.ExecuteNonQuery();
            MessageBox.Show("deleted");
            conn.Close();

        }
    }
}
