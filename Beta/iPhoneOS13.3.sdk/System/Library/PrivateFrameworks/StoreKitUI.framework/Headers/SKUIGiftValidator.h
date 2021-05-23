/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSURL, SKUIClientContext, SSVLoadURLOperation;

__attribute__((visibility("hidden")))
@interface SKUIGiftValidator : NSObject

{
    SKUIClientContext *_clientContext;
    NSOperationQueue *_operationQueue;
    long long _validationCount;
    SSVLoadURLOperation *_validationOperation;
    NSURL *_validationURL;
}

@property (nonatomic, readonly, getter=isValidating) _Bool validating;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (void)cancelValidation;
- (id)initWithValidationURL:(id)arg1 clientContext:(id)arg2;
- (void)validateGift:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_validateWithBodyDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_finishValidationWithResponse:(id)arg1 error:(id)arg2 attemptNumber:(long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)validateDonation:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;

@end
