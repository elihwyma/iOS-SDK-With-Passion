/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreServices/SSVComplexOperation.h>

@class NSLock;

@interface SKUIMediaSocialProfileOperation : SSVComplexOperation

{
    NSLock *_lock;
    CDUnknownBlockType _outputBlock;
}

@property (copy) CDUnknownBlockType outputBlock;

- (id)init;
- (void)main;
- (id)initWithClientContext:(id)arg1;
- (id)_profileWithResponseDictionary:(id)arg1;

@end
