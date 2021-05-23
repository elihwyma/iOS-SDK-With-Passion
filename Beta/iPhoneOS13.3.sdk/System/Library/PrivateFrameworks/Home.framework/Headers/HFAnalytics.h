/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@interface HFAnalytics : NSObject

+ (void)sendEvent:(unsigned long long)arg1;
+ (void)sendEvent:(unsigned long long)arg1 withData:(id)arg2;
+ (id)eventNameForEventType:(unsigned long long)arg1;
+ (void)_sendEvent:(id)arg1;

@end
