/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreServices/SSURLBag.h>

@class ISLoadURLBagOperation, ISURLBag, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUIURLBag : SSURLBag

{
    ISURLBag *_bag;
    NSMutableArray *_completionBlocks;
    _Bool _forceInvalidationForNextLoad;
    ISLoadURLBagOperation *_operation;
}

+ (id)URLBagForContext:(id)arg1;
+ (id)bagQueue;

- (void)invalidate;
- (id)valueForKey:(id)arg1 error:(id *)arg2;
- (id)storeFrontIdentifier;
- (void)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadValueForKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getTrustForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)existingBagDictionary;
- (void)_enqueueOperationWithContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_finishOperationWithURLBag:(id)arg1 error:(id)arg2;

@end
