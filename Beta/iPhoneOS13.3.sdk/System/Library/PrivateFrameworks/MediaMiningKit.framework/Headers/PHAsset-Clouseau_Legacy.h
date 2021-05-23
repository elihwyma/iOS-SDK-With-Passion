/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Photos/PHAsset.h>

#import <MediaMiningKit/Swift-Protocol.h>

@class CLLocation, CLSAssetFaceInformationSummary, NSArray, NSData, NSDate, NSDateComponents, NSSet, NSString, VNSceneprint;

@interface PHAsset (Clouseau_Legacy) <Swift>

@property (nonatomic, readonly) NSDateComponents *cls_localDateComponents;
@property (nonatomic, readonly) NSDate *cls_universalDate;
@property (nonatomic, readonly) NSDate *cls_localDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CLLocationCoordinate2D pl_coordinate;
@property (nonatomic, readonly) NSDate *pl_date;
@property (readonly) VNSceneprint *clsSceneprint;
@property (readonly) NSString *clsIdentifier;
@property (readonly) NSData *clsDistanceIdentity;
@property (nonatomic, readonly) CLLocation *clsLocation;
@property (nonatomic, readonly) NSArray *clsPeopleNames;
@property (nonatomic, readonly) NSArray *clsUnprefetchedPeopleNames;
@property (nonatomic, readonly) unsigned long long clsPeopleCount;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSArray *peopleNames;
@property (nonatomic, readonly) long long clsViewCount;
@property (nonatomic, readonly) long long clsPlayCount;
@property (nonatomic, readonly) long long clsShareCount;
@property (nonatomic, readonly) double clsContentScore;
@property (nonatomic, readonly) double clsExposureScore;
@property (nonatomic, readonly) double clsSharpnessScore;
@property (nonatomic, readonly) double clsAestheticScore;
@property (nonatomic, readonly) double clsHighlightVisibilityScore;
@property (nonatomic, readonly) double clsAutoplaySuggestionScore;
@property (nonatomic, readonly) double clsFaceScore;
@property (nonatomic, readonly) _Bool isUtility;
@property (nonatomic, readonly) _Bool isScreenshotOrScreenRecording;
@property (nonatomic, readonly) _Bool isFavorite;
@property (nonatomic, readonly) _Bool isVideo;
@property (nonatomic, readonly) _Bool clsIsAestheticallyPrettyGood;
@property (nonatomic, readonly) _Bool isBlurry;
@property (nonatomic, readonly) _Bool clsIsLoopOrBounce;
@property (nonatomic, readonly) _Bool clsIsLongExposure;
@property (nonatomic, readonly) _Bool clsIsInterestingVideo;
@property (nonatomic, readonly) _Bool clsIsInterestingLivePhoto;
@property (nonatomic, readonly) _Bool clsIsInterestingPanorama;
@property (nonatomic, readonly) _Bool clsIsInterestingSDOF;
@property (nonatomic, readonly) _Bool clsIsInterestingHDR;
@property (nonatomic, readonly) _Bool clsHasInterestingAudioClassification;
@property (nonatomic, readonly) _Bool clsHasCustomPlaybackVariation;
@property (nonatomic, readonly) _Bool clsIsNonMemorable;
@property (nonatomic, readonly) double clsDuration;
@property (nonatomic, readonly) _Bool clsIsInterestingReframe;
@property (copy, nonatomic, readonly) NSSet *clsSceneClassifications;
@property (readonly) _Bool clsIsInhabited;
@property (readonly) _Bool clsAvoidIfPossibleForKeyItem;
@property (readonly) _Bool clsHasPoorResolution;
@property (readonly) _Bool clsHasInterestingScenes;
@property (nonatomic, readonly) CLSAssetFaceInformationSummary *clsFaceInformationSummary;

+ (_Bool)legacyIsUtilityForAsset:(id)arg1;
+ (double)legacyScoreForAsset:(id)arg1 withContext:(id)arg2;
+ (_Bool)assetIsJunkWithSceneClassifications:(id)arg1 isVideo:(_Bool)arg2 confidenceThresholdBySceneIdentifierForJunkingScenes:(id)arg3 confidenceThresholdBySceneIdentifierForScenesPreventingJunking:(id)arg4;
+ (void)getSmileCount:(out long long *)arg1 andBlinkCount:(out long long *)arg2 forAsset:(id)arg3;
+ (_Bool)legacyAssetIsJunkWithSceneClassifications:(id)arg1 isVideo:(_Bool)arg2 confidenceThresholdBySceneIdentifierForJunkingScenes:(id)arg3 confidenceThresholdBySceneIdentifierForScenesPreventingJunking:(id)arg4;
+ (id)contextForItems:(id)arg1;
+ (_Bool)imageAssetIsJunkForMemoryFromSceneAndJunkClassifications:(id)arg1;
+ (_Bool)clsAvoidIfPossibleForKeyAssetWithAsset:(id)arg1;
+ (double)scoreForAsset:(id)arg1 withContext:(id)arg2;
+ (short)uninterestingAudioClassifications;
+ (_Bool)asset:(id)arg1 isAestheticallyAwesomeWithContext:(id)arg2;
+ (void)addAudioClassifications:(short)arg1 toAudioClassificationCounts:(id)arg2;
+ (short)audioClassificationsToEmphasizeWithAudioClassificationCounts:(id)arg1 threshold:(double)arg2;
+ (_Bool)assetIsJunkWithSceneClassifications:(id)arg1 confidenceThresholdBySceneIdentifierForScenesPreventingJunking:(id)arg2 confidenceThresholdBySceneIdentifierForJunkingScenes:(id)arg3 confidenceThresholdBySceneIdentifierForScenesPreventingSceneBasedJunking:(id)arg4;
+ (_Bool)imageAssetIsJunkFromSceneAndJunkClassifications:(id)arg1;
+ (_Bool)isUtilityForVideoAsset:(id)arg1;
+ (_Bool)isUtilityForImageAsset:(id)arg1;
+ (id)_personUUIDsByAssetUUIDWithAssets:(id)arg1;
+ (void)prefetchOnAssets:(id)arg1 options:(unsigned long long)arg2;
+ (void)_populateAsset:(id)arg1 withPersonsByUUIDs:(id)arg2;
+ (double)clsSharpnessScoreThresholdToNotBeBlurry;
+ (float)interactionScoreForAsset:(id)arg1;
+ (unsigned long long)clsPrefetchOptionsForIsUtility;
+ (_Bool)isScore:(double)arg1 closeToValue:(double)arg2;
+ (id)personLocalIdentifiersByAssetUUIDWithAssets:(id)arg1;
+ (id)clsAllAssetsFromFetchResult:(id)arg1 prefetchOptions:(unsigned long long)arg2;
+ (_Bool)isJunkWithJunkIdentifier:(unsigned int)arg1 confidence:(double)arg2 isReliable:(_Bool *)arg3;
+ (_Bool)isUtilityForAsset:(id)arg1;

- (unsigned long long)facesCount;
- (id)_fetchMediaAnalysisType:(unsigned long long)arg1 forceProcessing:(_Bool)arg2;
- (struct CGImage *)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(_Bool)arg2 networkAllowed:(_Bool)arg3;
- (double)scoreWithContext:(id)arg1;
- (_Bool)isSubtype:(unsigned long long)arg1;
- (double)clsVideoScore;
- (double)clsActivityScore;
- (unsigned long long)clsVideoFaceCount;
- (_Bool)clsIsTragicallyBad;
- (short)clsInterestingAudioClassifications;
- (long long)highestSupportedScoringVersion;
- (float)clsInteractionScore;
- (float)clsBehavioralScore;
- (_Bool)isGold;
- (_Bool)isShinyGem;
- (_Bool)isRegularGem;
- (void)setCacheCurationScore:(double)arg1;
- (void)clsSetPeopleNames:(id)arg1;
- (void)clsSetPeopleCount:(id)arg1;
- (void)clsSetSceneClassifications:(id)arg1;
- (void)clsSetNumberOfFaces:(unsigned long long)arg1 numberOfFacesOfVerifiedPersons:(unsigned long long)arg2 numberOfGoodFaces:(unsigned long long)arg3 numberOfGoodFacesOfVerifiedPersons:(unsigned long long)arg4 averageFaceQuality:(double)arg5 averageFaceQualityOfVerifiedPersons:(double)arg6;
- (id)_256SpecificAssetResource;
- (id)_imageDataForAssetResource:(id)arg1 networkAccessAllowed:(_Bool)arg2 error:(id *)arg3;
- (id)clsUnprefetchedSceneClassifications;
- (_Bool)clsPeopleNamesArePrefetched;
- (_Bool)clsPeopleCountIsPrefetched;
- (_Bool)clsSceneClassificationsArePrefetched;
- (_Bool)clsFaceInformationArePrefetched;

@end
