/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class CMPocketStateManager, NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface SBPocketStateMonitor : NSObject

{
    CMPocketStateManager *_pocketStateManager;
    long long _pocketState;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (nonatomic, readonly) long long pocketState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;
- (id)initWithCMPocketStateManager:(id)arg1 calloutQueue:(id)arg2;

@end
