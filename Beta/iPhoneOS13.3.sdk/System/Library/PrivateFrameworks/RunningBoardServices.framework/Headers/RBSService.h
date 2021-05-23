/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSMutableSet, NSString, RBSConnection;

@protocol OS_dispatch_queue, RBSServiceDelegate;

@interface RBSService : NSObject

{
    id <RBSServiceDelegate> _delegate;
    struct os_unfair_lock_s _lock;
    NSMutableSet *_inheritances;
    RBSConnection *_connection;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)didReceiveInheritances:(id)arg1;
- (void)didLoseInheritances:(id)arg1;
- (void)willTerminateProcessWithAcknowledgement:(CDUnknownBlockType)arg1;
- (id)inheritances;

@end
