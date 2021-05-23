/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSNumber, NSString;

@interface SSPrivacyMetricsEvent : SSMetricsMutableEvent

@property (retain, nonatomic) NSString *acknowledgmentIdentifier;
@property (retain, nonatomic) NSNumber *acknowledgmentVersion;
@property (nonatomic) _Bool acknowledged;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) _Bool displayed;

- (id)init;

@end
