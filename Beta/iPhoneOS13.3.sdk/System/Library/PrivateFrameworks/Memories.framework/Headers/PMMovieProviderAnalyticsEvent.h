/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/PMCoreAnalyticsEvent.h>

@class NSDate, NSString;

@interface PMMovieProviderAnalyticsEvent : PMCoreAnalyticsEvent

{
    _Bool _didChangeMusic;
    _Bool _didChangeTitle;
    _Bool _didChangeSubTitle;
    _Bool _didChangeMood;
    _Bool _didChangeDuration;
    _Bool _didChangeKeyAsset;
    _Bool _didChangeTrimRange;
    _Bool _didPlayAllTheWayThrough;
    _Bool _didStartPlayback;
    _Bool _didShare;
    _Bool _didEdit;
    _Bool _didAbortDuringDownload;
    long long _changedMusicCount;
    long long _changedTitleCount;
    long long _changedSubTitleCount;
    long long _changedMoodCount;
    long long _changedDurationCount;
    long long _changedKeyAssetCount;
    long long _changedTrimRangeCount;
    long long _playedAllTheWayThroughCount;
    long long _startedPlaybackCount;
    long long _sharedCount;
    long long _editDoneCount;
    long long _abortedDuringDownloadCount;
    long long _assetCountDeltaFromEditing;
    NSDate *_creationDate;
}

@property (nonatomic) long long changedMusicCount;
@property (nonatomic) _Bool didChangeMusic;
@property (nonatomic) long long changedTitleCount;
@property (nonatomic) _Bool didChangeTitle;
@property (nonatomic) long long changedSubTitleCount;
@property (nonatomic) _Bool didChangeSubTitle;
@property (nonatomic) long long changedMoodCount;
@property (nonatomic) _Bool didChangeMood;
@property (nonatomic) long long changedDurationCount;
@property (nonatomic) _Bool didChangeDuration;
@property (nonatomic) long long changedKeyAssetCount;
@property (nonatomic) _Bool didChangeKeyAsset;
@property (nonatomic) long long changedTrimRangeCount;
@property (nonatomic) _Bool didChangeTrimRange;
@property (nonatomic) long long playedAllTheWayThroughCount;
@property (nonatomic) _Bool didPlayAllTheWayThrough;
@property (nonatomic) long long startedPlaybackCount;
@property (nonatomic) _Bool didStartPlayback;
@property (nonatomic) long long sharedCount;
@property (nonatomic) _Bool didShare;
@property (nonatomic) long long editDoneCount;
@property (nonatomic) _Bool didEdit;
@property (nonatomic) long long abortedDuringDownloadCount;
@property (nonatomic) _Bool didAbortDuringDownload;
@property (nonatomic) long long assetCountDeltaFromEditing;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copy;
- (id)eventName;
- (id)eventPayload;
- (id)eventByIncreasingChangedMusicCount;
- (id)eventByAssigningDidChangeMusic;
- (id)eventByIncreasingEditDoneCount;
- (id)eventByAssigningDidEdit;
- (id)eventByIncreasingChangedTitleCount;
- (id)eventByAssigningDidChangeTitle;
- (id)eventByIncreasingChangedSubtitleCount;
- (id)eventByAssigningDidChangeSubTitle;
- (id)eventByIncreasingChangedTrimRangeCount;
- (id)eventByAssigningDidChangeTrimRange;
- (id)eventByIncreasingChangedKeyAssetCount;
- (id)eventByAssigningDidChangeKeyAsset;
- (id)eventByIncreasingAbortedDuringDownloadCount;
- (id)eventByAssigningDidAbortDuringDownload;
- (id)eventByAssigningAssetCountDeltaFromEditingWithCount:(long long)arg1;
- (id)eventByIncreasingStartedPlaybackCount;
- (id)eventByAssigningDidStartPlayback;
- (id)eventByIncreasingPlayedAllTheWayThroughCount;
- (id)eventByAssigningDidPlayAllTheWayThrough;
- (id)eventByIncreasingChangedDurationCount;
- (id)eventByAssigningDidChangeDuration;
- (id)eventByIncreasingChangedMoodCount;
- (id)eventByAssigningDidChangeMood;
- (id)eventByIncreasingSharedCount;
- (id)eventByAssigningDidShare;

@end
