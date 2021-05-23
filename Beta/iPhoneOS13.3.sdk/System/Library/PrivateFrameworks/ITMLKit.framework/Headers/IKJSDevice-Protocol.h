/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class NSString;

@protocol IKJSDevice <Swift>

@property (nonatomic, readonly) NSString *vendorIdentifier;
@property (nonatomic, readonly) NSString *advertisingIdentifier;
@property (nonatomic, readonly) _Bool isAdvertisingTrackingEnabled;
@property (nonatomic, readonly) NSString *appVersion;
@property (nonatomic, readonly) NSString *appIdentifier;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) _Bool isNetworkReachable;

@end
