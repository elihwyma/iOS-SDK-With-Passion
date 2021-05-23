/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class SSDownloadMetadata, SSPurchaseResponse;

@interface SSImportDownloadToIPodLibraryRequest : SSRequest

{
    SSDownloadMetadata *_downloadMetadata;
    SSPurchaseResponse *_purchaseResponse;
}

@property (nonatomic, readonly) SSDownloadMetadata *downloadMetadata;
@property (nonatomic, readonly) SSPurchaseResponse *purchaseResponse;

- (id)initWithDownloadMetadata:(id)arg1;
- (id)initWithPurchase:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;

@end
