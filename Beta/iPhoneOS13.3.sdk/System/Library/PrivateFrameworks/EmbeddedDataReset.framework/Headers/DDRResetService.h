/*
 Image: /System/Library/PrivateFrameworks/EmbeddedDataReset.framework/EmbeddedDataReset
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface DDRResetService : NSObject

{
    _Bool _invalidated;
    int _currentResetState;
    struct os_unfair_lock_s _lock;
    NSXPCConnection *_dataResetXPCConnection;
    NSXPCConnection *_observerNonLaunchingXPCConnection;
    NSHashTable *_obervers;
    long long _mode;
    NSObject<OS_dispatch_queue> *_observerQueue;
}

@property (retain, nonatomic) NSXPCConnection *dataResetXPCConnection;
@property (retain, nonatomic) NSXPCConnection *observerNonLaunchingXPCConnection;
@property (nonatomic) int currentResetState;
@property (retain, nonatomic) NSHashTable *obervers;
@property (nonatomic) _Bool invalidated;
@property (nonatomic) long long mode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (nonatomic) struct os_unfair_lock_s lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)invalidate;
- (void)removeObserver:(id)arg1;
- (void)sync;
- (void)resetWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)willBeginDataResetWithMode:(long long)arg1;
- (void)didBeginDataResetWithMode:(long long)arg1;
- (void)didCompleteDataResetMode:(long long)arg1 withError:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notifyClientsOfResetFailedWithErrorCode:(long long)arg1;
- (void)addOberver:(id)arg1;

@end
