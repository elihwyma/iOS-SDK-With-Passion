/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

#import <MediaMiningKit/Swift-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSDateComponents, NSSet, NSString, VNSceneprint;

@interface CLSTestInvestigationItem : NSObject <Swift>

{
    _Bool _isUtility;
    _Bool _isBlurry;
    _Bool _isVideo;
    _Bool _isScreenshotOrScreenRecording;
    _Bool _isFavorite;
    _Bool _clsIsAnInterestingVideo;
    _Bool _clsIsAnInterestingPhoto;
    _Bool _clsIsAnInterestingPanorama;
    _Bool _clsIsAnInterestingSDOF;
    _Bool _clsIsAnInterestingHDR;
    _Bool _clsHasInterestingAudioClassification;
    _Bool _clsHasCustomPlaybackVariation;
    _Bool _clsIsAestheticallyPrettyGood;
    _Bool _clsIsInhabited;
    _Bool _clsAvoidIfPossibleForKeyItem;
    _Bool _clsHasPoorResolution;
    _Bool _clsHasInterestingScenes;
    _Bool _clsIsNonMemorable;
    _Bool _clsIsLoopOrBounce;
    _Bool _clsIsLongExposure;
    _Bool _clsIsInterestingReframe;
    NSString *_clsIdentifier;
    CLLocation *_clsLocation;
    NSArray *_clsPeopleNames;
    long long _clsViewCount;
    long long _clsPlayCount;
    long long _clsShareCount;
    double _clsContentScore;
    NSData *_clsDistanceIdentity;
    NSSet *_clsSceneClassifications;
    VNSceneprint *_clsSceneprint;
    NSArray *_clsUnprefetchedPeopleNames;
    double _clsSharpnessScore;
    double _clsExposureScore;
    double _clsAestheticScore;
    double _clsFaceScore;
    NSDate *_cls_universalDate;
    double _clsHighlightVisibilityScore;
    double _clsAutoplaySuggestionScore;
    double _clsDuration;
}

@property (retain, nonatomic) CLLocation *clsLocation;
@property (retain, nonatomic) NSArray *clsPeopleNames;
@property (copy, nonatomic) NSSet *clsSceneClassifications;
@property (nonatomic, readonly) long long clsViewCount;
@property (nonatomic, readonly) long long clsPlayCount;
@property (nonatomic, readonly) long long clsShareCount;
@property (nonatomic, readonly) _Bool isUtility;
@property (nonatomic, readonly) NSDateComponents *cls_localDateComponents;
@property (retain, nonatomic) NSDate *cls_universalDate;
@property (nonatomic, readonly) NSDate *cls_localDate;
@property (nonatomic) double clsContentScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CLLocationCoordinate2D pl_coordinate;
@property (nonatomic, readonly) NSDate *pl_date;
@property (readonly) VNSceneprint *clsSceneprint;
@property (readonly) NSString *clsIdentifier;
@property (readonly) NSData *clsDistanceIdentity;
@property (nonatomic, readonly) NSArray *clsUnprefetchedPeopleNames;
@property (nonatomic, readonly) unsigned long long clsPeopleCount;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSArray *peopleNames;
@property (nonatomic, readonly) double clsExposureScore;
@property (nonatomic, readonly) double clsSharpnessScore;
@property (nonatomic, readonly) double clsAestheticScore;
@property (nonatomic, readonly) double clsHighlightVisibilityScore;
@property (nonatomic, readonly) double clsAutoplaySuggestionScore;
@property (nonatomic, readonly) double clsFaceScore;
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
@property (readonly) _Bool clsIsInhabited;
@property (readonly) _Bool clsAvoidIfPossibleForKeyItem;
@property (readonly) _Bool clsHasPoorResolution;
@property (readonly) _Bool clsHasInterestingScenes;

+ (id)contextForItems:(id)arg1;
+ (id)itemWithPeopleNames:(id)arg1 universalDate:(id)arg2 coordinate:(struct CLLocationCoordinate2D)arg3;
+ (id)itemWithUniversalDate:(id)arg1 sceneClassifications:(id)arg2;

- (id)init;
- (struct CGImage *)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(_Bool)arg2 networkAllowed:(_Bool)arg3;
- (double)scoreWithContext:(id)arg1;

@end
