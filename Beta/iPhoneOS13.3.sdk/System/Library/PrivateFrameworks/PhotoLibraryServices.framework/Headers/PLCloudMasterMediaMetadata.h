/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, PLAdditionalAssetAttributes, PLCloudMaster;

@interface PLCloudMasterMediaMetadata : PLManagedObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) PLCloudMaster *cloudMaster;
@property (retain, nonatomic) PLAdditionalAssetAttributes *additionalAssetAttributes;

+ (id)entityName;

- (id)payloadsForChangedKeys:(id)arg1;
- (void)_addPayloadIfValidForAsset:(id)arg1 changedKeys:(id)arg2 toPayloads:(id)arg3 modelProperties:(id)arg4;

@end
