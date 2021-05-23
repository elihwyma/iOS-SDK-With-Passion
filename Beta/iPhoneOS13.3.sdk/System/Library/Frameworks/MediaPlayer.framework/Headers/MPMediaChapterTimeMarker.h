/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPTimeMarker.h>

@class NSArray;

@interface MPMediaChapterTimeMarker : MPTimeMarker

{
    unsigned long long _chapterIndex;
    NSArray *_chapters;
    _Bool _hasArtworkAtPlaybackTime;
}

@property (nonatomic) unsigned long long chapterIndex;
@property (retain, nonatomic) NSArray *chapters;
@property (nonatomic) _Bool hasArtworkAtPlaybackTime;

@end
