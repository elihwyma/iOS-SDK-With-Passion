/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDAssetTokenRequest, NSDictionary, NSMapTable;

__attribute__((visibility("hidden")))
@interface CKDGetContentAuthTokensForPutURLRequest : CKDURLRequest

{
    _Bool _useEncryption;
    CKDAssetTokenRequest *_assetTokenRequest;
    NSMapTable *_transactionStateByRequestIDs;
    NSDictionary *_headers;
}

@property (retain, nonatomic) CKDAssetTokenRequest *assetTokenRequest;
@property (retain, nonatomic) NSMapTable *transactionStateByRequestIDs;
@property (retain, nonatomic) NSDictionary *headers;
@property (nonatomic) _Bool useEncryption;

- (int)operationType;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (_Bool)allowsAnonymousAccount;
- (id)initWithAssetTokenRequest:(id)arg1 headers:(id)arg2;

@end
