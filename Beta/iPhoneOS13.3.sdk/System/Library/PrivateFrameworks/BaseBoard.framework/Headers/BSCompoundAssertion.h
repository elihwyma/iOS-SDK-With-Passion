/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface BSCompoundAssertion : NSObject

{
    struct os_unfair_lock_s _syncLock;
    _Bool _syncLock_invalid;
    CDUnknownBlockType _syncLock_block;
    struct os_unfair_lock_s _dataLock;
    NSMutableSet *_dataLock_acquisitions;
    NSString *_dataLock_identifierPrefix;
}

@property (readonly) NSSet *reasons;
@property (readonly, getter=isActive) _Bool active;
@property (readonly) NSSet *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;
+ (id)assertionWithIdentifier:(id)arg1;
+ (id)assertionWithIdentifier:(id)arg1 stateDidChangeHandler:(CDUnknownBlockType)arg2;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_acquisitionDidInvalidate:(id)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (id)_dataLock_context;
- (id)acquireForReason:(id)arg1 withContext:(id)arg2;
- (id)_syncLock_acquireForReason:(id)arg1 withContext:(id)arg2;
- (id)_dataLock_copyState;
- (void)_syncLock_acquisitionDidInvalidate:(id)arg1;
- (id)acquireForReason:(id)arg1;

@end
