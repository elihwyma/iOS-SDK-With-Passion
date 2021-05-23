/*
 Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

#import <Foundation/NSObject.h>

@interface USTrackingAgentProxy : NSObject

+ (id)newConnection;
+ (id)newInterface;
+ (void)proxyFromConnection:(id)arg1 withRetryCount:(unsigned long long)arg2 proxyHandler:(CDUnknownBlockType)arg3;
+ (void)synchronousProxyFromConnection:(id)arg1 withRetryCount:(unsigned long long)arg2 proxyHandler:(CDUnknownBlockType)arg3;

@end
