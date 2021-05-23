/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreServices/SSVComplexOperation.h>

@class NSLock, NSMutableDictionary, NSNumber, NSString, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUIMediaSocialUpdateProfileOperation : SSVComplexOperation

{
    SKUIClientContext *_clientContext;
    NSString *_entityType;
    NSNumber *_identifier;
    NSLock *_lock;
    NSMutableDictionary *_parameters;
    CDUnknownBlockType _outputBlock;
}

@property (copy) NSString *entityType;
@property (copy) NSNumber *identifier;
@property (copy) CDUnknownBlockType outputBlock;

- (void)main;
- (id)initWithClientContext:(id)arg1;
- (void)setValue:(id)arg1 forProfileField:(id)arg2;
- (id)_imageDictionaryFromPhotoUpload:(id)arg1;
- (id)_requestWithError:(id *)arg1;
- (id)_requestBodyWithError:(id *)arg1;

@end
