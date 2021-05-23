/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, SKUIClientContext, SKUIITunesPassConfiguration, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIRedeemConfiguration : NSObject

{
    long long _category;
    SKUIClientContext *_clientContext;
    UIImage *_inputImage;
    SKUIITunesPassConfiguration *_itunesPassConfiguration;
    UIImage *_landingImage;
    NSOperationQueue *_operationQueue;
    UIImage *_successImage;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) UIImage *inputImage;
@property (nonatomic, readonly) UIImage *landingImage;
@property (nonatomic, readonly) UIImage *successImage;
@property (nonatomic, readonly) SKUIITunesPassConfiguration *ITunesPassConfiguration;

- (id)initWithOperationQueue:(id)arg1 category:(long long)arg2 clientContext:(id)arg3;
- (void)loadConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_loadConfigurationWithURLBagDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_setLandingImage:(id)arg1;
- (void)_setSuccessImage:(id)arg1;
- (void)_setInputImage:(id)arg1;
- (void)_loadDefaultImages;
- (id)_redeemPreflightRequestBodyData;
- (void)_didLoadWithResponseDictionary:(id)arg1;

@end
