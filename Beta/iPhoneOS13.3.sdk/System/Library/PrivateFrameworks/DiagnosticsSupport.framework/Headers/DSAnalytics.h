/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <Foundation/NSObject.h>

@interface DSAnalytics : NSObject

+ (void)sendAnalyticsWithEvent:(unsigned long long)arg1 error:(id)arg2;
+ (void)sendAnalyticsWithEvent:(unsigned long long)arg1 payloadDict:(id)arg2;
+ (void)sendAnalyticsWithEvent:(unsigned long long)arg1;

@end
