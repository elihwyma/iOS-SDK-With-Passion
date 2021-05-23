/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdPhotoKitClient : PLAssetsdBaseClient

+ (_Bool)inTransactionProxy;

- (void)requestUUIDWithCustomUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)clearSaveTokens:(id)arg1;
- (void)sendChangesRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
