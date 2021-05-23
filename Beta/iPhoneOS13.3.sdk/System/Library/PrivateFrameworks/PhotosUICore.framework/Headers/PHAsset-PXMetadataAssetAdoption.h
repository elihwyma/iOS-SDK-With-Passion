/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Photos/PHAsset.h>

@class CLLocation, NSAttributedString, NSDate, NSString, NSValue, PXDebugValueList;

@interface PHAsset (PXMetadataAssetAdoption)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) _Bool cloudIsDeletable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double weight;
@property (nonatomic, readonly) struct CGAffineTransform transform;
@property (nonatomic, readonly) struct CGPoint positionOffset;
@property (nonatomic, readonly) struct CGRect preferredCropRect;
@property (nonatomic, readonly) struct CGRect acceptableCropRect;
@property (nonatomic, readonly) struct CGRect px_originalFaceAreaRect;
@property (nonatomic, readonly) NSValue *px_originalFaceAreaRectValue;
@property (nonatomic, readonly) struct CGRect px_faceAreaRect;
@property (copy, nonatomic, readonly) NSString *px_adjustmentUuid;
@property (nonatomic, readonly) long long px_currentVariationType;
@property (nonatomic, readonly) PXDebugValueList *px_curationDebugValues;
@property (nonatomic, readonly) NSAttributedString *px_curationDebugString;
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
@property (nonatomic, readonly) _Bool wantsAdjustments;
@property (nonatomic, readonly) NSString *adjustedContentIdentifier;
@property (nonatomic, readonly) PHAsset *photoKitAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool requiresConfidentiality;

+ (id)px_fetchAssetsInArray:(id)arg1 photoLibrary:(id)arg2;
+ (id)px_fetchPlacesAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)px_orderedAssetsFromAssets:(id)arg1 sortDescriptors:(id)arg2;
+ (id)addressWithoutUnitedStatesZipCode:(id)arg1;

- (double)weightUsingCriterion:(long long)arg1;
- (double)weightUsingWeightingScheme:(long long)arg1;
- (float)px_playbackScore;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (id)localizedDetailedGeoDescriptionForRTL:(_Bool)arg1;
- (long long)isContentEqualTo:(id)arg1;
- (_Bool)px_isVariationTypeRecommended:(long long)arg1;
- (_Bool)px_isRecommendationSeenForVariationType:(long long)arg1;
- (id)_deferredProcessingStringWithEnum:(unsigned short)arg1;
- (id)_imageProccessingFlagsWithMainFileURL:(id)arg1;
- (id)_sceneClassificationStringWithClassifications:(id)arg1;
- (id)_junkClassificationStringWithClassifications:(id)arg1;
- (id)stringMinutesTimeRangeFromTimeRange:(CDStruct_e83c9415)arg1;
- (id)px_singleLineMailingAddress;
- (id)px_detailedDebugDescriptionInLibrary:(id)arg1;
- (id)applyAdjustmentsToCompositionController:(id)arg1 renderer:(id)arg2;
- (struct CGRect)_adjustedRectWithFaceAreaRect:(struct CGRect)arg1 proposedCropRect:(struct CGRect)arg2 assetRect:(struct CGRect)arg3 verticalContentMode:(long long)arg4;
- (id)_faceNamesStringForAsset;
- (id)px_accessibilityLabelForStyles:(unsigned long long)arg1;
- (_Bool)px_isSupportedApp:(id)arg1;
- (_Bool)px_isConfidentialAdjustmentsVersion:(id)arg1;

@end
