/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDAssetTokenRequest;

__attribute__((visibility("hidden")))
@interface CKDAssetTokenRequestOperation : CKDDatabaseOperation

{
    CKDAssetTokenRequest *_assetTokenRequest;
}

@property (retain, nonatomic) CKDAssetTokenRequest *assetTokenRequest;

- (void)main;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
