/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class CNFuture, CNUnfairLock, NSMutableDictionary, NSOperationQueue;

@interface CNDeviceFirstUnlock : NSObject

{
    CNUnfairLock *_handlersLock;
    NSMutableDictionary *_unlockHandlers;
    NSOperationQueue *_workQueue;
    CNFuture *_firstUnlockFuture;
}

@property (retain, nonatomic) CNUnfairLock *handlersLock;
@property (retain, nonatomic) NSMutableDictionary *unlockHandlers;
@property (retain, nonatomic) NSOperationQueue *workQueue;
@property (retain, nonatomic) CNFuture *firstUnlockFuture;
@property (nonatomic, readonly) _Bool isUnlockedSinceBoot;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)removeUnlockHandlerWithIdentifier:(id)arg1;
- (void)addUnlockHandlerWithIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)withHandlersLock_addHandlerWithIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)withHandlersLock_registerForDeviceFirstUnlock;
- (void)withHandlersLock_cancelExistingOperationWithIdentifier:(id)arg1;
- (long long)countOfUnlockHandlers;

@end
