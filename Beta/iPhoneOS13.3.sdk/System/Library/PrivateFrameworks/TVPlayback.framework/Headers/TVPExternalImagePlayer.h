/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSDate, NSMutableArray, TVPExternalImageLoader, UIImage;

@protocol TVPMediaItem;

__attribute__((visibility("hidden")))
@interface TVPExternalImagePlayer : NSObject

{
    double _rate;
    NSDate *_playbackDate;
    UIImage *_currentImage;
    CDUnknownBlockType _elapsedTimeUpdateBlock;
    CDUnknownBlockType _imageUpdateBlock;
    CADisplayLink *_displayLink;
    double _previousTimestamp;
    NSDate *_referenceDate;
    TVPExternalImageLoader *_imageLoader;
    NSObject<TVPMediaItem> *_mediaItem;
    NSMutableArray *_imageInfosBeingLoaded;
    double _currentImageTime;
    double _imageInterval;
    CDStruct_1b6d18a9 _elapsedTime;
    CDStruct_1b6d18a9 _referenceTime;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double previousTimestamp;
@property (nonatomic) CDStruct_1b6d18a9 referenceTime;
@property (retain, nonatomic) NSDate *referenceDate;
@property (retain, nonatomic) NSDate *playbackDate;
@property (retain, nonatomic) UIImage *currentImage;
@property (retain, nonatomic) TVPExternalImageLoader *imageLoader;
@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem;
@property (retain, nonatomic) NSMutableArray *imageInfosBeingLoaded;
@property (nonatomic) double currentImageTime;
@property (nonatomic) double imageInterval;
@property (nonatomic) double rate;
@property (nonatomic) CDStruct_1b6d18a9 elapsedTime;
@property (copy, nonatomic) CDUnknownBlockType elapsedTimeUpdateBlock;
@property (copy, nonatomic) CDUnknownBlockType imageUpdateBlock;

- (void)invalidate;
- (void)_cancelAllImageLoads;
- (void)_updateImageIntervalWithRate:(double)arg1;
- (void)_loadImagesIfNecessary;
- (void)_displayLinkTimerFired:(id)arg1;
- (double)_timeAfterRemovingInterstitials:(double)arg1;
- (void)_cancelStaleImageLoadsForTime:(double)arg1;
- (id)initWithMediaItem:(id)arg1 referenceTime:(CDStruct_1b6d18a9)arg2 forDate:(id)arg3;

@end
