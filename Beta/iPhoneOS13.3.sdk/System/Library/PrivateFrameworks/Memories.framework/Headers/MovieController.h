/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class AVAssetImageGenerator, AVMutableAudioMix, AVMutableComposition, AVMutableVideoComposition, AVPlayerItem, CALayer, Composition, NSString, Project;

__attribute__((visibility("hidden")))
@interface MovieController : NSObject

{
    float m_rate;
    _Bool _forExport;
    CALayer *playerLayer;
    Project *project;
    CALayer *compositionLayer;
    CDUnknownBlockType progressUpdateBlock;
    AVAssetImageGenerator *_customImageGen;
    Composition *_composition;
    double _exportAspect;
    CDUnknownBlockType _playerReadyCompletionBlock;
    long long _customImageGenCount;
    struct CGSize _size;
}

@property long long customImageGenCount;
@property (retain) AVAssetImageGenerator *customImageGen;
@property (retain) Composition *composition;
@property _Bool forExport;
@property double exportAspect;
@property (nonatomic, readonly) AVPlayerItem *playerItem;
@property (copy) CDUnknownBlockType playerReadyCompletionBlock;
@property (nonatomic, readonly) struct CGSize temporarySize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) AVMutableComposition *AVComposition;
@property (retain) Project *project;
@property (nonatomic, readonly) CALayer *compositionLayer;
@property (retain, nonatomic) CALayer *playerLayer;
@property (nonatomic, readonly) AVMutableVideoComposition *videoComposition;
@property (nonatomic, readonly) AVMutableAudioMix *audioMix;
@property struct CGSize size;
@property (copy, nonatomic) CDUnknownBlockType progressUpdateBlock;

+ (id)controllerWithProject:(id)arg1 forExport:(_Bool)arg2;
+ (id)imageFromProject:(id)arg1 atTime:(int)arg2 withSize:(struct CGSize)arg3;

- (void)dealloc;
- (void)updateComposition;
- (void)applyPlayerItemProperties;
- (void)clearPlayerItemProperties;
- (void)resetSizeToDefault;
- (id)imageAtTime:(CDStruct_1b6d18a9)arg1 withSize:(struct CGSize)arg2;
- (void)cancelAllUIImageGeneration;
- (void)setProjectOnComposition;
- (void)tearDownProjectDisplay;
- (void)updateForProjectTimeInSeconds:(double)arg1 asynchronous:(_Bool)arg2 allowUnloading:(_Bool)arg3;
- (void)renderBothOrientationsOfFirstFrameAtSize:(struct CGSize)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)generateUIImagesAsynchronouslyForSize:(struct CGSize)arg1 atTimes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateOrigUIImagesAsynchronouslyForSize:(struct CGSize)arg1 atTimes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
