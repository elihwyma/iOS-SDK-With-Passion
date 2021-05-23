/*
 Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface USUsageMonitor : NSObject

{
    NSXPCConnection *_xpcConnection;
}

@property (readonly) NSXPCConnection *xpcConnection;

- (id)init;
- (void)dealloc;
- (void)startMonitoringBudgets:(id)arg1 darwinNotificationName:(id)arg2 notificationTimes:(id)arg3 clientIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)stopMonitoringBudgets:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)checkStatusOfBudgets:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startMonitoringBudgets:(id)arg1 darwinNotificationName:(id)arg2 notificationTimes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)startMonitoringBudgets:(id)arg1 darwinNotificationName:(id)arg2 notificationTimes:(id)arg3 error:(id *)arg4;
- (void)stopMonitoringBudgets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopMonitoringAllBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)checkStatusOfBudgets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)checkStatusOfBudgets:(id)arg1 error:(id *)arg2;
- (void)checkStatusOfAllBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)checkStatusOfBudgets:(id)arg1 clientIdentifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
