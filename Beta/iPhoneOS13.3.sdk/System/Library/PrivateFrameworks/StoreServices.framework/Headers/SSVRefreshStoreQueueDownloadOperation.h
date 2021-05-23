/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSVLoadDownloadQueueOperation.h>

@class NSNumber, NSString;

@interface SSVRefreshStoreQueueDownloadOperation : SSVLoadDownloadQueueOperation

{
    NSString *_downloadTrasactionID;
    NSNumber *_accountID;
    NSString *_downloadTransactionID;
}

@property (readonly) NSNumber *accountID;
@property (readonly) NSString *downloadTransactionID;

- (void)main;
- (_Bool)_refreshDownloadWithTransactionID:(id)arg1 accountID:(id)arg2 bagKey:(id)arg3 error:(id *)arg4;
- (id)initWithDownloadTransactionIdentifier:(id)arg1 accountID:(id)arg2;
- (id)isDownloadTransactionID;

@end
