/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSMutableArray, NSString;

@interface PKAsyncOperationState : NSObject <Swift>

{
    struct os_unfair_lock_s _actionLock;
    NSMutableArray *_cancelActions;
    struct os_unfair_lock_s _lock;
    _Bool _canceled;
    _Bool _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isCanceled) _Bool canceled;

- (id)init;
- (void)_invalidate;
- (id)_init;
- (void)performAction:(CDUnknownBlockType)arg1;
- (void)_cancel;
- (void)addCancelAction:(CDUnknownBlockType)arg1;

@end
