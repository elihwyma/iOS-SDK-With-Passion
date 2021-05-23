/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/PMCoreAnalyticsEvent.h>

@class NSString;

@interface PMPipelineAnalyticsEvent : PMCoreAnalyticsEvent

{
    NSString *_songID;
    long long _moodID;
    NSString *_durationRequested;
    double _durationAchieved;
    NSString *_collectionClass;
    long long _assetCountRequested;
    long long _assetCountAchieved;
    long long _unsuccessfulDownloadCount;
}

@property (copy, nonatomic) NSString *songID;
@property (nonatomic) long long moodID;
@property (nonatomic) NSString *durationRequested;
@property (nonatomic) double durationAchieved;
@property (copy, nonatomic) NSString *collectionClass;
@property (nonatomic) long long assetCountRequested;
@property (nonatomic) long long assetCountAchieved;
@property (nonatomic) long long unsuccessfulDownloadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copy;
- (id)eventName;
- (id)eventPayload;
- (id)eventBySettingSongID:(id)arg1;
- (id)eventBySettingMoodID:(long long)arg1;
- (id)eventBySettingDurationRequested:(id)arg1;
- (id)eventBySettingDurationAchieved:(double)arg1;
- (id)eventBySettingCollectionClass:(id)arg1;
- (id)eventBySettingAssetCountRequested:(long long)arg1;
- (id)eventBySettingAssetCountAchieved:(long long)arg1;
- (id)eventBySettingUnsuccessfulDownloadCount:(long long)arg1;

@end
