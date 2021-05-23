/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFCameraPlaybackEngine, HFPosterFrameImageCache, NSMutableDictionary, NSOperationQueue;

@interface HFPosterFrameManager : NSObject

{
    HFCameraPlaybackEngine *_playbackEngine;
    NSOperationQueue *_posterFrameQueue;
    HFPosterFrameImageCache *_imageCache;
    NSMutableDictionary *_posterFrameObservers;
    NSMutableDictionary *_generationObservers;
    NSMutableDictionary *_inProgressOperations;
}

@property (retain, nonatomic) NSOperationQueue *posterFrameQueue;
@property (retain, nonatomic) HFPosterFrameImageCache *imageCache;
@property (retain, nonatomic) NSMutableDictionary *posterFrameObservers;
@property (retain, nonatomic) NSMutableDictionary *generationObservers;
@property (retain, nonatomic) NSMutableDictionary *inProgressOperations;
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine;

+ (id)sharedManager;
+ (id)clipIdentifierStringFromDate:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)cacheDemoPosterFramesForAsset:(id)arg1 forClip:(id)arg2;
- (void)purgePosterFrames;
- (double)_timeScaleAdjustedOffset:(double)arg1;
- (id)_cachedPosterFrameImageForClip:(id)arg1 offset:(double)arg2;
- (id)_posterFrameForClip:(id)arg1 atOffset:(double)arg2;
- (void)_addOperationForObserver:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3;
- (void)_generateMissingPosterFrameImagesForClip:(id)arg1 observer:(id)arg2;
- (id)keyForClip:(id)arg1 timeOffset:(double)arg2;
- (void)addOperationForObserver:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3 withKey:(id)arg4;
- (id)_posterFrameObserversForKey:(id)arg1;
- (void)_addPosterFrameImage:(id)arg1 forClip:(id)arg2 withOffset:(double)arg3;
- (id)cachedPosterFrameImageForClip:(id)arg1 offset:(double)arg2;
- (id)keyForClip:(id)arg1;
- (void)_generateImagesUsingAsset:(id)arg1 clip:(id)arg2 observer:(id)arg3;
- (void)_fetchPosterFrameImageForObserver:(id)arg1 forClip:(id)arg2 offset:(double)arg3;
- (void)addPosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3;
- (void)removePosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3;
- (void)addDemoPosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3;

@end
