package br.com.opensource.mymodule1;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Context;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    static {
       System.loadLibrary("mymodule1");
    }

    Button button;
    public native CharSequence printString(Context context, CharSequence str);
    public native CharSequence stdcout(Context context, CharSequence str);

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        button = (Button)findViewById(R.id.button_main);
    }

    public void Onclicked(View view) {
        button.setText( printString(this, "HELLO C++") );
        System.out.println( stdcout(this, "HELLLOOOOO") );
    }
}