/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, PHAsset, PHAssetExportRequestOptions;

@interface PUActivityItemSourceConfiguration : NSObject

{
    _Bool _requiresAssetExport;
    CDStruct_7f880b36 _sharingPreferences;
    unsigned long long _maxFileSizeLimit;
    long long _outputType;
    long long _assetExportKind;
    PHAssetExportRequestOptions *_assetExportRequestOptions;
    PHAsset *_asset;
    NSDictionary *_sharingVariants;
    NSString *_activityType;
}

@property (retain, nonatomic) PHAsset *asset;
@property (copy, nonatomic) NSDictionary *sharingVariants;
@property (copy, nonatomic) NSString *activityType;
@property (nonatomic) CDStruct_2a4d9400 sharingPreferences;
@property (nonatomic, readonly) unsigned long long maxFileSizeLimit;
@property (nonatomic, readonly) long long outputType;
@property (nonatomic, readonly) _Bool requiresAssetExport;
@property (nonatomic, readonly) long long assetExportKind;
@property (nonatomic, readonly) PHAssetExportRequestOptions *assetExportRequestOptions;

+ (_Bool)supportsAssetLocalIdentifierForActivityType:(id)arg1;
+ (_Bool)isAssetBundleSupportedByActivityType:(id)arg1;
+ (_Bool)isLivePhotoBundleSupportedByActivityType:(id)arg1;
+ (id)_photosInternalActivities;
+ (id)_activitiesThatSupportWideColorInLivePhotos;
+ (id)_activitiesThatSupportWideColorInImages;
+ (id)_activitiesThatDontRequireAssetExport;
+ (unsigned long long)maxFileSizeLimitForActivityType:(id)arg1 asset:(id)arg2;
+ (_Bool)shouldProvideCompatibleFormatForActivityType:(id)arg1 andAvailableSharingVariants:(id)arg2;
+ (_Bool)shouldProvideAlternateVariantForActivityType:(id)arg1 forAsset:(id)arg2 withAvailableSharingVariants:(id)arg3;
+ (id)_activitiesThatSupportLivePhotoBundles;
+ (id)_activitiesThatSupportAssetBundles;
+ (id)_photosActionSheetActivities;
+ (id)_systemActivitiesThatDontSupportMomentShareLinks;
+ (id)_activitiesThatDontSupportMomentShareLinks;
+ (id)_activitiesThatOnlySupportMomentShareLinks;
+ (id)_activitiesThatSupportHEIFHEVC;
+ (_Bool)shouldExcludeAlternateVariantForActivityType:(id)arg1;
+ (_Bool)isMomentShareLinkSupportedByActivityType:(id)arg1;
+ (_Bool)isIndividualItemPreparationSupportedByActivityType:(id)arg1;
+ (id)descriptionForOutputType:(long long)arg1;
+ (id)descriptionForAssetExportKind:(long long)arg1;

- (void)_configure;
- (id)_customAccessibilityLabel;
- (id)initWithAsset:(id)arg1 availableSharingVariants:(id)arg2 activityType:(id)arg3 preferences:(CDStruct_2a4d9400)arg4;
- (_Bool)_requiresAssetsLibraryURLForAsset:(id)arg1 forActivityType:(id)arg2;
- (_Bool)_requiresAssetExportForAsset:(id)arg1 forActivityType:(id)arg2;
- (_Bool)_shouldFlattenSlomoVideoForActivityType:(id)arg1;
- (id)_videoExportPresetForActivityType:(id)arg1;
- (id)_videoExportFileTypeForActivityType:(id)arg1;
- (_Bool)_wantsColorSpaceConversionForActivityType:(id)arg1;
- (_Bool)_wantsLivePhotoColorSpaceConversionForActivityType:(id)arg1;
- (_Bool)_wantsLivePhotoBundleForActivityType:(id)arg1;
- (_Bool)_wantsAssetBundleForActivityType:(id)arg1;

@end
