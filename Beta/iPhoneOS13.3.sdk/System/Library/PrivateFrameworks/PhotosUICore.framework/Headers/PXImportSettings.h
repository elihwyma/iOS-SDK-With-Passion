/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXImportSettings : PXSettings

{
    _Bool _simulateEmptyImportSource;
    _Bool _showImportItemFilenames;
    _Bool _disableAssetDeletion;
    _Bool _loadActualThumbnails;
    _Bool _lazyLoadAllAssets;
    _Bool _groupItemsByEXIFDate;
    _Bool _showNewestItemsInGridUntilScrolled;
    _Bool _hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem;
    _Bool _longPressForOneUpInCompactMode;
    _Bool _longPressForOneUpInPadSpec;
    _Bool _useThumbnailSizesAsImageSizeHints;
    _Bool _loadRetinaThumbnails;
    _Bool _showProgressTitles;
    long long _simulatedBatteryLevel;
    long long _alreadyImportedTruncationMode;
    long long _assetEnumerationBehavior;
    double _assetEnumerationBatchInterval;
    unsigned long long _assetEnumerationBatchSize;
}

@property (nonatomic) long long simulatedBatteryLevel;
@property (nonatomic) _Bool simulateEmptyImportSource;
@property (nonatomic) _Bool showImportItemFilenames;
@property (nonatomic) _Bool disableAssetDeletion;
@property (nonatomic) _Bool loadActualThumbnails;
@property (nonatomic) _Bool lazyLoadAllAssets;
@property (nonatomic) _Bool groupItemsByEXIFDate;
@property (nonatomic) _Bool showNewestItemsInGridUntilScrolled;
@property (nonatomic) long long alreadyImportedTruncationMode;
@property (nonatomic) _Bool hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem;
@property (nonatomic) _Bool longPressForOneUpInCompactMode;
@property (nonatomic) _Bool longPressForOneUpInPadSpec;
@property (nonatomic) _Bool useThumbnailSizesAsImageSizeHints;
@property (nonatomic) _Bool loadRetinaThumbnails;
@property (nonatomic) long long assetEnumerationBehavior;
@property (nonatomic) double assetEnumerationBatchInterval;
@property (nonatomic) unsigned long long assetEnumerationBatchSize;
@property (nonatomic) _Bool showProgressTitles;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end
