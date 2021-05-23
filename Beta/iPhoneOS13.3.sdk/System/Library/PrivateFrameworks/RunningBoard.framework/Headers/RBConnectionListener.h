/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

#import <RunningBoard/Swift-Protocol.h>

@class NSArray, NSMapTable, NSString, RBConnectionContext;

@protocol OS_dispatch_queue, OS_os_transaction, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface RBConnectionListener : NSObject <Swift>

{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
    NSMapTable *_lock_connectionToClientMap;
    NSMapTable *_lock_identifierToClientMap;
    RBConnectionContext *_context;
    NSObject<OS_os_transaction> *_transaction;
}

@property (nonatomic, readonly) NSArray *clients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *stateCaptureTitle;

+ (id)sharedConnectionWorkloop;

- (id)init;
- (void)stop;
- (void)start;
- (id)initWithContext:(id)arg1;
- (id)captureState;

@end
