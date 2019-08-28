// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#import "GoogleMobileAds/GoogleMobileAds.h"

typedef void (^FLTAdRequestMiddleware)(UIView* _Nonnull, GADRequest* _Nonnull);

@interface FLTRequestFactory : NSObject

@property (class) FLTAdRequestMiddleware _Nullable setAdRequest;
- (instancetype _Nonnull)initWithTargetingInfo:(NSDictionary* _Nullable)targetingInfo;
- (GADRequest* _Nonnull)createRequest;

@end
