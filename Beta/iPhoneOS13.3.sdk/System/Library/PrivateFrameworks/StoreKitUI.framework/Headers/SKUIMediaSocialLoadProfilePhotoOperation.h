/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreServices/SSVComplexOperation.h>

@class NSLock, SKUIClientContext, SKUIMediaSocialProfile;

__attribute__((visibility("hidden")))
@interface SKUIMediaSocialLoadProfilePhotoOperation : SSVComplexOperation

{
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    CDUnknownBlockType _outputBlock;
    SKUIMediaSocialProfile *_profile;
}

@property (copy) CDUnknownBlockType outputBlock;

- (void)main;
- (id)initWithClientContext:(id)arg1;
- (id)_silhouette;
- (void)_returnPhoto:(id)arg1 isFinal:(_Bool)arg2;
- (void)_fetchProfile;
- (void)_fetchMonogram;
- (void)_fetchPhoto;

@end
