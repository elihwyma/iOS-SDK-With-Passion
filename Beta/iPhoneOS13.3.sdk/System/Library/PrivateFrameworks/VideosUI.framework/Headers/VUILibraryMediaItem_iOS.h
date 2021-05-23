/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVPlayback/TVPBaseMediaItem.h>

@class ML3Track, MPMediaItem, MPMediaLibrary, NSURL, VUIPlaybackPositionInfo;

@protocol TVImageLoader;

__attribute__((visibility("hidden")))
@interface VUILibraryMediaItem_iOS : TVPBaseMediaItem

{
    _Bool _bookmarkDisabled;
    long long _persistentID;
    MPMediaItem *_mpMediaItem;
    MPMediaLibrary *_mpMediaLibrary;
    ML3Track *_ml3Track;
    VUIPlaybackPositionInfo *_playbackPositionInfo;
    NSURL *_mediaItemURLInternal;
}

@property (nonatomic) long long persistentID;
@property (retain, nonatomic) ML3Track *ml3Track;
@property (retain, nonatomic) MPMediaItem *mpMediaItem;
@property (retain, nonatomic) VUIPlaybackPositionInfo *playbackPositionInfo;
@property (retain, nonatomic) NSURL *mediaItemURLInternal;
@property (nonatomic, readonly) MPMediaLibrary *mpMediaLibrary;
@property (nonatomic, readonly) id <TVImageLoader> imageLoader;
@property (nonatomic) _Bool bookmarkDisabled;

+ (void)initialize;

- (id)mediaItemURL;
- (id)initWithMPMediaItem:(id)arg1;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (_Bool)isEqualToMediaItem:(id)arg1;
- (_Bool)hasTrait:(id)arg1;
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;
- (void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2;
- (void)cleanUpMediaItem;
- (id)_localPlaybackFilePathURL;
- (_Bool)_supportsBookmarks;
- (void)_schedulePlaybackPositionInfoPersistence;

@end
