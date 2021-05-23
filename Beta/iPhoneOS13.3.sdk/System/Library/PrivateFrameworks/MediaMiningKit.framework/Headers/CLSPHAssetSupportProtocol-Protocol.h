/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/Swift-Protocol.h>

@class CLSAssetFaceInformationSummary;

@protocol CLSPHAssetSupportProtocol <Swift>

@property (nonatomic, readonly) unsigned long long clsPeopleCount;
@property (nonatomic, readonly) CLSAssetFaceInformationSummary *clsFaceInformationSummary;

- (unsigned short)duration;
- (unsigned short)isHidden;
- (unsigned short)isVideo;
- (unsigned short)isTrashed;
- (unsigned short)facesCount;
- (unsigned short)isFavorite;
- (unsigned short)isAudio;
- (unsigned short)hasAdjustments;
- (unsigned short)isPhoto;
- (unsigned short)isIncludedInCloudFeeds;
- (unsigned short)representsBurst;
- (unsigned short)isUtility;
- (unsigned short)isBlurry;
- (unsigned short)clsDistanceIdentity;
- (unsigned short)clsViewCount;
- (unsigned short)clsPlayCount;
- (unsigned short)clsShareCount;
- (unsigned short)clsExposureScore;
- (unsigned short)clsSharpnessScore;
- (unsigned short)clsAestheticScore;
- (unsigned short)clsSceneClassifications;
- (unsigned short)isSubtype: /* Error: Ran out of types for this method. */;
- (unsigned short)clsVideoScore;
- (unsigned short)clsActivityScore;
- (unsigned short)clsVideoFaceCount;
- (unsigned short)clsIsTragicallyBad;
- (unsigned short)clsInterestingAudioClassifications;
- (unsigned short)highestSupportedScoringVersion;

@end
