/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <Foundation/NSObject.h>

@interface CPSAnalytics : NSObject

@property (nonatomic, readonly) _Bool shouldRecordAnalyticsEvents;

+ (id)sharedInstance;

- (void)_sendCoreAnalyticsEvent:(id)arg1 withDictionary:(id)arg2;
- (void)navigationStartedWithBundleIdentifier:(id)arg1;

@end
