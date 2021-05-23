/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRadioPlaybackHistory.h>

@class ICRadioPlaybackHistoryItem, NSArray;

@interface ICMutableRadioPlaybackHistory : ICRadioPlaybackHistory

@property (copy, nonatomic) ICRadioPlaybackHistoryItem *currentTrack;
@property (nonatomic) long long numberOfSkips;
@property (copy, nonatomic) NSArray *tracks;

- (void)addTracks:(id)arg1;
- (void)_updateTracksUsingBlock:(CDUnknownBlockType)arg1;
- (void)_checkCurrentTrackIsPresent;
- (void)addTrack:(id)arg1;
- (void)removeExpiredTracks;
- (void)removeTracksAtIndexes:(id)arg1;
- (void)replaceTrackAtIndex:(long long)arg1 withTrack:(id)arg2;

@end
