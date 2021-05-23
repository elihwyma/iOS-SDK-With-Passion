/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class MCProfileConnection, NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface PKPasscodeLockManager : NSObject

{
    MCProfileConnection *_profileConnection;
    _Bool _isPasscodeSet;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSHashTable *_observers;
}

@property (nonatomic, readonly) _Bool isPasscodeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg1 userInfo:(id)arg2;

@end
