/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSArray, NSData, NSDate, NSDateComponents, NSNumber, NSSet, NSString, VNSceneprint;

@interface PGCuratorInvestigationItem : NSObject

{
    NSNumber *_clsViewCount;
    NSNumber *_clsPlayCount;
    NSNumber *_clsShareCount;
    NSNumber *_isUtility;
    NSNumber *_isBlurry;
    NSNumber *_isScreenshotOrScreenRecording;
    NSNumber *_isFavorite;
    NSNumber *_isVideo;
    NSNumber *_clsContentScore;
    NSNumber *_clsIsInterestingVideo;
    NSNumber *_clsIsInterestingLivePhoto;
    NSNumber *_clsIsInterestingPanorama;
    NSNumber *_clsIsInterestingSDOF;
    NSNumber *_clsIsInterestingHDR;
    NSNumber *_clsIsInterestingReframe;
    NSNumber *_clsHasInterestingAudioClassification;
    NSNumber *_clsHasCustomPlaybackVariation;
    NSNumber *_clsSharpnessScore;
    NSNumber *_clsExposureScore;
    NSNumber *_clsAestheticScore;
    NSNumber *_clsIsAestheticallyPrettyGood;
    NSNumber *_clsFaceScore;
    NSNumber *_clsIsInhabited;
    NSNumber *_clsAvoidIfPossibleForKeyItem;
    NSNumber *_clsHasPoorResolution;
    NSNumber *_clsHasInterestingScenes;
    NSNumber *_clsLikabilityScore;
    NSNumber *_clsInteractionScore;
    NSNumber *_clsHighlightVisibilityScore;
    NSNumber *_clsAutoplaySuggestionScore;
    NSNumber *_isShinyGem;
    NSNumber *_isRegularGem;
    NSNumber *_clsDuration;
    NSNumber *_clsIsNonMemorable;
    NSNumber *_clsIsLoopOrBounce;
    NSNumber *_clsIsLongExposure;
    NSString *_clsIdentifier;
    NSDate *_cls_universalDate;
    NSDate *_cls_localDate;
    CLLocation *_clsLocation;
    NSArray *_clsPeopleNames;
    NSData *_clsDistanceIdentity;
    NSSet *_clsSceneClassifications;
    VNSceneprint *_clsSceneprint;
    NSArray *_clsUnprefetchedPeopleNames;
    NSArray *_faceInfos;
}

@property (readonly) NSArray *faceInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CLLocationCoordinate2D pl_coordinate;
@property (nonatomic, readonly) NSDate *pl_date;
@property (readonly) VNSceneprint *clsSceneprint;
@property (readonly) NSString *clsIdentifier;
@property (readonly) NSData *clsDistanceIdentity;
@property (readonly) NSDate *cls_universalDate;
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
@property (nonatomic, readonly) NSDateComponents *cls_localDateComponents;
@property (nonatomic, readonly) NSDate *cls_localDate;
@property (readonly) _Bool clsIsInhabited;
@property (readonly) _Bool clsAvoidIfPossibleForKeyItem;
@property (readonly) _Bool clsHasPoorResolution;
@property (readonly) _Bool clsHasInterestingScenes;

+ (id)contextForItems:(id)arg1;
+ (id)itemWithUUID:(id)arg1 itemInfo:(id)arg2;

- (id)init;
- (id)date;
- (struct CGImage *)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(_Bool)arg2 networkAllowed:(_Bool)arg3;
- (double)scoreWithContext:(id)arg1;
- (double)clsInteractionScore;
- (_Bool)isShinyGem;
- (_Bool)isRegularGem;
- (id)initWithUUID:(id)arg1 itemInfo:(id)arg2;
- (double)clsLikabilityScore;

@end
