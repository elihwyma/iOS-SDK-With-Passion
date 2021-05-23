/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVPlayerItem, MPAVItem, NSURL;

@interface MPMovie : NSObject

{
    NSURL *_url;
    long long _movieSourceType;
    double _startPlaybackTime;
    double _endPlaybackTime;
    _Bool _explicitlySetMovieSourceType;
    _Bool _movieIsUnplayable;
    double _lastKnownDuration;
    struct CGSize _lastKnownNaturalSize;
    long long _lastKnownType;
    MPAVItem *_item;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) MPAVItem *item;
@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly) AVPlayerItem *playerItem;
@property (nonatomic, readonly) unsigned long long movieMediaTypes;
@property (nonatomic) long long movieSourceType;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double playableDuration;
@property (nonatomic, readonly) struct CGSize naturalSize;
@property (nonatomic) double startPlaybackTime;
@property (nonatomic) double endPlaybackTime;

+ (id)movieWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)movieWithAsset:(id)arg1 error:(id *)arg2;
+ (id)movieWithPlayerItem:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (void)_sharedInit;
- (id)_initWithAsset:(id)arg1 error:(id *)arg2;
- (id)_initWithPlayerItem:(id)arg1 error:(id *)arg2;
- (id)_initWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)_durationAvailableNotification:(id)arg1;
- (void)_naturalSizeAvailableNotification:(id)arg1;
- (void)_typeAvailableNotification:(id)arg1;
- (void)_determineMediaType;

@end
