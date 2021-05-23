/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext;

@interface SKUIMediaSocialAdminPermissionsOperation : SSVComplexOperation

{
    SKUIClientContext *_clientContext;
    CDUnknownBlockType _outputBlock;
}

@property (copy) CDUnknownBlockType outputBlock;

- (void)main;
- (id)initWithClientContext:(id)arg1;
- (id)_authorsWithResponseDictionary:(id)arg1;
- (id)_lookupResponseForMissingAuthors:(id)arg1 error:(id *)arg2;

@end
