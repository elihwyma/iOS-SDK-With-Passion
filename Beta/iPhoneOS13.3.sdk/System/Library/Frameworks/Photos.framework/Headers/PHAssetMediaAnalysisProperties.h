/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@class NSDate;

@interface PHAssetMediaAnalysisProperties : PHAssetPropertySet

{
    short _audioClassification;
    float _blurrinessScore;
    float _exposureScore;
    float _autoplaySuggestionScore;
    float _videoScore;
    float _activityScore;
    NSDate *_mediaAnalysisTimeStamp;
    unsigned long long _mediaAnalysisVersion;
    unsigned long long _faceCount;
    CDStruct_1b6d18a9 _bestKeyFrameTime;
    struct CGRect _bestPlaybackRect;
    CDStruct_e83c9415 _bestVideoTimeRange;
}

@property (nonatomic, readonly) CDStruct_1b6d18a9 bestKeyFrameTime;
@property (nonatomic, readonly) CDStruct_e83c9415 bestVideoTimeRange;
@property (nonatomic, readonly) struct CGRect bestPlaybackRect;
@property (nonatomic, readonly) NSDate *mediaAnalysisTimeStamp;
@property (nonatomic, readonly) unsigned long long mediaAnalysisVersion;
@property (nonatomic, readonly) float blurrinessScore;
@property (nonatomic, readonly) float exposureScore;
@property (nonatomic, readonly) float autoplaySuggestionScore;
@property (nonatomic, readonly) float videoScore;
@property (nonatomic, readonly) float activityScore;
@property (nonatomic, readonly) unsigned long long faceCount;
@property (nonatomic, readonly) short audioClassification;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;

- (void)initWithDefaultValues;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
