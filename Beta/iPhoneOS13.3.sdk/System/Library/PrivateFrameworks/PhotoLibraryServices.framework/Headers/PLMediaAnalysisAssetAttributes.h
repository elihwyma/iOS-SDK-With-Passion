/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, PLManagedAsset;

@interface PLMediaAnalysisAssetAttributes : PLManagedObject

@property (retain, nonatomic) NSDate *mediaAnalysisTimeStamp;
@property (nonatomic) unsigned long long mediaAnalysisVersion;
@property (nonatomic) int bestVideoRangeDurationTimeScale;
@property (nonatomic) long long bestVideoRangeDurationValue;
@property (nonatomic) int bestVideoRangeStartTimeScale;
@property (nonatomic) long long bestVideoRangeStartValue;
@property (nonatomic) int bestKeyFrameTimeScale;
@property (nonatomic) long long bestKeyFrameValue;
@property (nonatomic) long long packedBestPlaybackRect;
@property (nonatomic) float blurrinessScore;
@property (nonatomic) float exposureScore;
@property (nonatomic) float autoplaySuggestionScore;
@property (nonatomic) float videoScore;
@property (nonatomic) float activityScore;
@property (nonatomic) unsigned long long faceCount;
@property (nonatomic) short audioClassification;
@property (retain, nonatomic) PLManagedAsset *asset;

+ (id)fetchRequest;
+ (id)entityName;

- (void)willSave;
- (void)setBestKeyFrameTime:(CDStruct_198678f7)arg1;
- (CDStruct_198678f7)bestKeyFrameTime;
- (void)setBestVideoTimeRange:(CDStruct_3c1748cc)arg1;
- (CDStruct_3c1748cc)bestVideoTimeRange;

@end
