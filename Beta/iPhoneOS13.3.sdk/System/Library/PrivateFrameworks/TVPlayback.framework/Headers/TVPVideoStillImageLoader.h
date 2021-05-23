/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class AVAssetImageGenerator, NSMutableArray, NSString, TVPMediaItemLoader, TVPStateMachine;

@protocol TVPMediaItem;

@interface TVPVideoStillImageLoader : NSObject

{
    NSObject<TVPMediaItem> *_mediaItem;
    TVPMediaItemLoader *_mediaItemLoader;
    TVPStateMachine *_stateMachine;
    NSMutableArray *_pendingImageLoadInfos;
    NSMutableArray *_imageLoadInfosBeingLoaded;
    AVAssetImageGenerator *_imageGenerator;
    CDStruct_1b6d18a9 _videoDuration;
}

@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem;
@property (retain, nonatomic) TVPMediaItemLoader *mediaItemLoader;
@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) NSMutableArray *pendingImageLoadInfos;
@property (retain, nonatomic) NSMutableArray *imageLoadInfosBeingLoaded;
@property (retain, nonatomic) AVAssetImageGenerator *imageGenerator;
@property (nonatomic) CDStruct_1b6d18a9 videoDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithMediaItem:(id)arg1;
- (id)loadImagesForTimes:(id)arg1 maxSize:(struct CGSize)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)cancelImageLoadingForIdentifiers:(id)arg1;
- (void)_registerStateMachineHandlers;
- (void)_mediaItemLoader:(id)arg1 stateDidChangeTo:(id)arg2;
- (double)closestImageTimeForTime:(double)arg1;

@end
