/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKRemoteAssetManifestItem.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKRemoteCloudStoreAssetManifestItem : PKRemoteAssetManifestItem <Swift>

@property (nonatomic, readonly) NSString *recordName;

+ (_Bool)supportsSecureCoding;

- (unsigned long long)itemType;
- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
