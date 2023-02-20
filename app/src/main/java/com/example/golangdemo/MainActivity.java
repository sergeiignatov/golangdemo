package com.example.golangdemo;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    private static final String TAG = "golang-demo";

    static {
        System.loadLibrary("c++_shared");
        System.loadLibrary("webrtc_worker");
        System.loadLibrary("whipsender");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    @Override
    protected void onResume() {
        super.onResume();

        String hello = sayHello();
        Log.d(TAG, hello);
        Toast.makeText(this, hello, Toast.LENGTH_LONG).show();
    }

    private native String sayHello();
}