/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreServices/SSVComplexOperation.h>

@class NSLock, SKUIClientContext, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIMediaSocialSaveProfilePhotoOperation : SSVComplexOperation

{
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    CDUnknownBlockType _outputBlock;
    UIImage *_photo;
}

- (void)main;
- (void)setPhoto:(id)arg1;
- (void)setOutputBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)outputBlock;
- (id)initWithClientContext:(id)arg1;
- (id)_requestWithError:(id *)arg1;
- (id)_photoUploadWithResponseDictionary:(id)arg1;

@end
