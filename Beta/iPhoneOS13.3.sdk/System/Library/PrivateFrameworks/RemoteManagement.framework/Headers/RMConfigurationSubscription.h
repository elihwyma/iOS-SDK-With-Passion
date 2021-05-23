/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <NSObject.h>

@class NSArray, NSString;

@protocol OS_dispatch_queue;

@interface RMConfigurationSubscription : NSObject

{
    NSObject *_notifyTokenLock;
    _Bool _hasResumed;
    int _notifyToken;
    NSString *_darwinNotificationName;
    NSArray *_types;
    CDUnknownBlockType _notificationHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) _Bool hasResumed;
@property (nonatomic) int notifyToken;
@property (copy, nonatomic, readonly) NSString *darwinNotificationName;
@property (copy, nonatomic, readonly) NSArray *types;
@property (nonatomic, readonly) CDUnknownBlockType notificationHandler;

+ (unsigned int)_registerForDarwinNotificationWithName:(id)arg1 notifyToken:(int *)arg2 queue:(id)arg3 notificationHandler:(CDUnknownBlockType)arg4;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (void)resume;
- (id)initWithDarwinNotificationName:(id)arg1 types:(id)arg2 notificationHandler:(CDUnknownBlockType)arg3;

@end
