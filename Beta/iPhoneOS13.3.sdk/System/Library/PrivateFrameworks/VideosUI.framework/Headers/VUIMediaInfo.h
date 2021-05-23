/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/TVMediaInfo.h>

@class IKAppContext, TVPPlaylist;

__attribute__((visibility("hidden")))
@interface VUIMediaInfo : TVMediaInfo

{
    _Bool _hasProgress;
    _Bool _showsSecondaryVideoView;
    _Bool _automaticPlaybackStart;
    _Bool _automaticPlaybackStop;
    _Bool _restrictionsAlreadyUnlocked;
    _Bool _shouldDelayLoadingImage;
    _Bool _allowsPictureInPicture;
    _Bool _overridesStartTimeWithResumeTime;
    TVPPlaylist *_tvpPlaylist;
    unsigned long long _playbackStartReason;
    unsigned long long _playbackStopReason;
    unsigned long long _playbackContext;
    IKAppContext *_appContext;
    double _playbackDelayInterval;
}

@property (retain, nonatomic) TVPPlaylist *tvpPlaylist;
@property (nonatomic) _Bool overridesStartTimeWithResumeTime;
@property (nonatomic) unsigned long long playbackStartReason;
@property (nonatomic, readonly) _Bool hasProgress;
@property (nonatomic) _Bool showsSecondaryVideoView;
@property (nonatomic, getter=isAutomaticPlaybackStart) _Bool automaticPlaybackStart;
@property (nonatomic, getter=isAutomaticPlaybackStop) _Bool automaticPlaybackStop;
@property (nonatomic) unsigned long long playbackStopReason;
@property (nonatomic) _Bool restrictionsAlreadyUnlocked;
@property (nonatomic) _Bool shouldDelayLoadingImage;
@property (nonatomic) unsigned long long playbackContext;
@property (retain, nonatomic) IKAppContext *appContext;
@property (nonatomic) _Bool allowsPictureInPicture;
@property (nonatomic) double playbackDelayInterval;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPlaybackContext:(unsigned long long)arg1 vuiMediaItems:(id)arg2;
- (void)setUserPlaybackInitiationDate:(id)arg1 openURLCompletionDate:(id)arg2;
- (id)initWithPlaybackContext:(unsigned long long)arg1 mpMediaItems:(id)arg2;
- (id)initWithPlaybackContext:(unsigned long long)arg1 videosPlayables:(id)arg2 imageProxies:(id)arg3 storeDictionary:(id)arg4;
- (id)_playlistFromVideosPlayables:(id)arg1 andStoreDictionary:(id)arg2;
- (void)_updatePlaybackStartReason;
- (id)_playbackOverridesForURL:(id)arg1 orAdamID:(id)arg2;
- (id)_storeMediaItemsFromVideosPlayable:(id)arg1 andStoreDictionary:(id)arg2;
- (id)_tvpRatingDomainFromUTSRatingDomain:(id)arg1;
- (void)_populateMediaItem:(id)arg1 withMetadataFromVideosPlayable:(id)arg2;
- (id)_auxMediaItemFromVideosPlayable:(id)arg1;
- (id)_tvpMediaTypeFromPlayableType:(id)arg1 isRental:(_Bool)arg2;
- (void)_populateMediaItem:(id)arg1 withMetadataOverrides:(id)arg2;
- (id)_playlistFromMPMediaItems:(id)arg1;
- (id)_storeMediaItemFromMPMediaItem:(id)arg1;
- (long long)_videoResolutionFromMPVideoQuality:(long long)arg1;
- (long long)_videoDynamimcRangeFromMPColorCapability:(long long)arg1;
- (id)_playlistForVUIMediaItems:(id)arg1;
- (id)initWithBackgroundImageDictionary:(id)arg1;

@end
