/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface FMXPCNotificationsUtil : NSObject

{
    NSMutableDictionary *_darwinNotificationHandlers;
    NSMutableDictionary *_distributedNotificationHandlers;
    NSObject<OS_dispatch_queue> *_modificationQueue;
}

@property (retain, nonatomic) NSMutableDictionary *darwinNotificationHandlers;
@property (retain, nonatomic) NSMutableDictionary *distributedNotificationHandlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *modificationQueue;

+ (id)sharedInstance;
+ (void)handleDarwinNotificationsWithHandlers:(id)arg1;
+ (void)handleDistributedNotificationsWithHandlers:(id)arg1;

- (id)init;
- (void)registerHandler:(CDUnknownBlockType)arg1 forDarwinNotification:(id)arg2;
- (void)_didReceiveDarwinNotification:(id)arg1;
- (void)registerHandler:(CDUnknownBlockType)arg1 forDistributedNotification:(id)arg2;
- (void)_didReceiveDistributedNotification:(id)arg1 withContext:(id)arg2;
- (_Bool)isHandlerRegisteredForDarwinNotification:(id)arg1;
- (void)deregisterHandlerForDarwinNotification:(id)arg1;
- (_Bool)isHandlerRegisteredForDistributedNotification:(id)arg1;
- (void)deregisterHandlerForDistributedNotification:(id)arg1;

@end
