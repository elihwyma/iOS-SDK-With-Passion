/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDate, NSDictionary, NSError, NSMutableDictionary, NSString, PHImportAsset, PHImportAssetDataRequest, PXImportAssetCollection;

@protocol PXImportDisplayDelegate;

@interface PXImportItemViewModel : PXObservable <Swift>

{
    NSString *_collectionIdentifier;
    _Bool _selected;
    _Bool _selectable;
    _Bool _duplicate;
    _Bool _isDeleted;
    id <PXImportDisplayDelegate> _displayDelegate;
    PHImportAsset *_importAsset;
    PXImportAssetCollection *_assetCollection;
    NSString *_kind;
    PHImportAssetDataRequest *_thumbnailRequest;
    NSError *_thumbnailError;
    double _imageProcessingStartTime;
    double _imageProcessingEndTime;
    long long _state;
    long long _thumbnailIndex;
    NSDate *_importDate;
    NSString *_deleteSession;
    NSMutableDictionary *_imageRepresentationsBySize;
    NSMutableDictionary *_assetRequestsBySize;
    NSMutableDictionary *_thumbnailRequestsBySize;
    struct CGSize _largeThumbnailSize;
    struct CGSize _thumbnailSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long thumbnailIndex;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *localCreationDate;
@property (nonatomic, readonly, getter=isFavorite) _Bool favorite;
@property (nonatomic, readonly) _Bool representsBurst;
@property (nonatomic, readonly) _Bool isInCloud;
@property (nonatomic, readonly) _Bool isEligibleForAutoPlayback;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) Class defaultImageProviderClass;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long playbackVariation;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) unsigned long long thumbnailVersion;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) float hdrGain;
@property (nonatomic, readonly) unsigned long long burstSelectionTypes;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) NSDate *importDate;
@property (retain, nonatomic) NSMutableDictionary *imageRepresentationsBySize;
@property (retain, nonatomic) NSMutableDictionary *assetRequestsBySize;
@property (retain, nonatomic) NSMutableDictionary *thumbnailRequestsBySize;
@property (nonatomic, readonly) id uuid;
@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSDate *fileCreationDate;
@property (weak, nonatomic) id <PXImportDisplayDelegate> displayDelegate;
@property (nonatomic, readonly) PHImportAsset *importAsset;
@property (weak, nonatomic) PXImportAssetCollection *assetCollection;
@property (nonatomic, readonly) long long badgeType;
@property (nonatomic, readonly) _Bool isPanoramicImage;
@property (nonatomic, readonly) NSString *kind;
@property (nonatomic, readonly) _Bool isMediaAsset;
@property (nonatomic, readonly) _Bool isNotYetImported;
@property (nonatomic) struct CGSize largeThumbnailSize;
@property (nonatomic) struct CGSize thumbnailSize;
@property (nonatomic, readonly) NSString *debugDisplayName;
@property (weak, nonatomic) PHImportAssetDataRequest *thumbnailRequest;
@property (retain, nonatomic) NSError *thumbnailError;
@property (nonatomic) double imageProcessingStartTime;
@property (nonatomic) double imageProcessingEndTime;
@property (nonatomic, readonly, getter=isSelected) _Bool selected;
@property (nonatomic, readonly, getter=isSelectable) _Bool selectable;
@property (nonatomic, readonly, getter=isDuplicate) _Bool duplicate;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) long long thumbnailIndex;
@property (nonatomic, readonly) NSDate *importDate;
@property (nonatomic, readonly) NSString *deleteSession;
@property (nonatomic, readonly) _Bool isDeleted;
@property (nonatomic, readonly) NSDictionary *imageRepresentations;

+ (id)dateFormatter;
+ (_Bool)hasPanoramaImageDimensions:(struct CGSize)arg1;
+ (id)importAssetsFromModels:(id)arg1;
+ (id)alreadyImportedGroupIdentifier;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)groupIdentifier;
- (void)setState:(long long)arg1;
- (id)accessibilityLabel;
- (void)setSelected:(_Bool)arg1;
- (void)setSelectable:(_Bool)arg1;
- (void)setImportDate:(id)arg1;
- (void)setIsDeleted:(_Bool)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)initWithImportAsset:(id)arg1;
- (id)mutableChangeObject;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;
- (long long)isContentEqualTo:(id)arg1;
- (id)initWithKind:(id)arg1 selectable:(_Bool)arg2;
- (_Bool)isEqualToImportItemViewModel:(id)arg1;
- (void)setDuplicate:(_Bool)arg1;
- (void)addImageRepresentation:(id)arg1;
- (void)setDeleteSession:(id)arg1;
- (id)assetDataRequestForRequestSize:(unsigned long long)arg1;
- (void)setAssetDataRequest:(id)arg1 forRequestSize:(unsigned long long)arg2;
- (void)removeAssetDataRequestForRequestSize:(unsigned long long)arg1;
- (id)thumbnailRequestsForRequestSize:(unsigned long long)arg1;
- (void)addThumbnailRequest:(id)arg1;
- (void)removeThumbnailRequest:(id)arg1;

@end
