package io.flutter.plugins.firebaseadmob;

import android.content.Context;

import com.google.android.gms.ads.AdRequest;
import com.google.android.gms.ads.AdView;

public interface AdRequestMiddleware {
  void setAdRequest(Context context, AdView adView, AdRequest.Builder builder);
}
