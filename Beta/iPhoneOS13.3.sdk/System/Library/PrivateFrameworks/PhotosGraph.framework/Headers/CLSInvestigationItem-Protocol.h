/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSDateComponents, NSSet, NSString, VNSceneprint;

@protocol CLSInvestigationItem <Swift>

@property (nonatomic, readonly) CLLocation *clsLocation;
@property (nonatomic, readonly) NSArray *clsPeopleNames;
@property (nonatomic, readonly) NSArray *clsUnprefetchedPeopleNames;
@property (nonatomic, readonly) unsigned long long clsPeopleCount;
@property (nonatomic, readonly) NSString *clsIdentifier;
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
@property (nonatomic, readonly) NSData *clsDistanceIdentity;
@property (nonatomic, readonly) VNSceneprint *clsSceneprint;
@property (nonatomic, readonly) NSDateComponents *cls_localDateComponents;
@property (nonatomic, readonly) NSDate *cls_universalDate;
@property (nonatomic, readonly) NSDate *cls_localDate;
@property (readonly) _Bool clsIsInhabited;
@property (readonly) _Bool clsAvoidIfPossibleForKeyItem;
@property (readonly) _Bool clsHasPoorResolution;
@property (readonly) _Bool clsHasInterestingScenes;

+ (unsigned short)contextForItems: /* Error: Ran out of types for this method. */;

- (unsigned short)createThumbnailWithResolution:fillMode:networkAllowed: /* Error: Ran out of types for this method. */;
- (unsigned short)scoreWithContext: /* Error: Ran out of types for this method. */;

@end
