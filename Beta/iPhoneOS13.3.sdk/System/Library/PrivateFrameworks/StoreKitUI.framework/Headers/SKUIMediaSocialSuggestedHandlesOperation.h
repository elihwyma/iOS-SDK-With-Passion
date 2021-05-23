/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreServices/SSVComplexOperation.h>

@class NSArray, NSLock, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUIMediaSocialSuggestedHandlesOperation : SSVComplexOperation

{
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    CDUnknownBlockType _outputBlock;
    NSArray *_words;
}

@property (copy) CDUnknownBlockType outputBlock;
@property (copy) NSArray *words;

- (void)main;
- (id)initWithClientContext:(id)arg1;

@end
