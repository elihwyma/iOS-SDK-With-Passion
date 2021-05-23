/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFGenericFileContentItem.h>

@class PHAsset, WFFileType;

@interface WFPhotoMediaContentItem : WFGenericFileContentItem

{
    WFFileType *_preferredFileType;
}

@property (retain, nonatomic) WFFileType *preferredFileType;
@property (nonatomic, readonly) PHAsset *asset;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)ownedPasteboardTypes;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)filterDescription;
+ (id)pluralFilterDescription;
+ (_Bool)hasLibrary;
+ (id)itemWithAssetIdentifier:(id)arg1;
+ (id)itemWithAssetIdentifier:(id)arg1 assetFile:(id)arg2;
+ (id)itemWithAssetIdentifier:(id)arg1 assetFile:(id)arg2 nameIfKnown:(id)arg3;
+ (id)itemsWithBurstIdentifier:(id)arg1;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)photoAlbums;
+ (id)remoteItemWithAssetIdentifier:(id)arg1 named:(id)arg2;
+ (_Bool)isAvailableOnPlatform:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (struct CGSize)size;
- (id)orientation;
- (id)duration;
- (id)isHidden;
- (id)model;
- (id)width;
- (id)height;
- (id)mediaType;
- (id)isFavorite;
- (id)isLivePhoto;
- (id)isBurst;
- (id)imageManager;
- (id)make;
- (id)outputTypes;
- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;
- (_Bool)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)getPreferredFileExtension:(CDUnknownBlockType)arg1;
- (void)getPreferredFileSize:(CDUnknownBlockType)arg1;
- (id)additionalRepresentationsForSerialization;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (_Bool)isScreenshot;
- (id)assetResourceManager;
- (void)getMetadata:(CDUnknownBlockType)arg1;
- (void)getFrameRate:(CDUnknownBlockType)arg1;
- (id)metadataIfLocallyAvailable;
- (_Bool)isPhotoType:(id)arg1;
- (id)photoTypes;
- (void)getThumbnail:(CDUnknownBlockType)arg1 ofSize:(struct CGSize)arg2;
- (void)retrieveAssetResource:(id)arg1 withNetworkAccess:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)retrieveFileWithImageManager:(CDUnknownBlockType)arg1 forType:(id)arg2;
- (id)preferredAssetResourceForType:(id)arg1;
- (void)generateAVAsset:(CDUnknownBlockType)arg1 networkAccessAllowed:(_Bool)arg2;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone *)arg2;
- (id)fullSizeAssetResourcesInResources:(id)arg1;
- (id)assetRepresentationTypes;

@end
