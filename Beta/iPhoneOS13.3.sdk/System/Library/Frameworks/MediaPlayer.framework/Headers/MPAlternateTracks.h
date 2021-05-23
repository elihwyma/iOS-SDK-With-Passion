/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class AVPlayerItemLegibleOutput, MPAVItem, MPAlternateTextTrack, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface MPAlternateTracks : NSObject

{
    MPAVItem *_item;
    NSDictionary *_alternateTracks;
    NSMutableDictionary *_trackChangeDictionary;
    _Bool _disableAlternateTextTrackRendering;
    AVPlayerItemLegibleOutput *_legibleOutput;
    MPAlternateTextTrack *_currentTextTrack;
    NSArray *_outOfBandTextTracks;
}

@property (nonatomic, readonly, getter=isLoaded) _Bool loaded;
@property (retain, nonatomic) NSArray *outOfBandTextTracks;
@property (nonatomic) _Bool disableAlternateTextTrackRendering;
@property (retain, nonatomic) MPAlternateTextTrack *selectedAlternateTextTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)subtitleLanguages;

- (void)reloadData;
- (id)initWithItem:(id)arg1;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(CDStruct_1b6d18a9)arg4;
- (void)beginTrackChanges;
- (void)commitTrackChanges;
- (id)currentTrackForType:(unsigned long long)arg1;
- (unsigned long long)indexOfCurrentTrackForType:(unsigned long long)arg1;
- (void)setTrack:(id)arg1 forType:(unsigned long long)arg2;
- (id)tracksForType:(unsigned long long)arg1;
- (_Bool)hasTracksForTypes:(unsigned long long)arg1;
- (unsigned long long)trackCountForTypes:(unsigned long long)arg1;
- (void)reloadDataWithChangedCaptionDisplayType:(_Bool)arg1;
- (void)enableLegibleOutputIfNecessary;
- (id)_keyForTrackType:(unsigned long long)arg1;
- (id)_currentTextTrackAccordingToAVF;
- (void)_suppressAVFSubtitleRendering;

@end
