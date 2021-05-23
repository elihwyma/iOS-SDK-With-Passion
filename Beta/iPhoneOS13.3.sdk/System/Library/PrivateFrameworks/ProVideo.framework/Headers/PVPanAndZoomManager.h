/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSTimer;

@interface PVPanAndZoomManager : NSObject

{
    double _maxScale;
    double _minScale;
    _Bool _skipFirstSnapToEdge;
    NSTimer *_snapToEdgeTimer;
    double _scaleWhileSnapped;
    struct CGSize _mediaSize;
    struct CGSize _destSize;
    struct PVTransformAnimationInfo _workingTransformScale;
    struct PVTransformAnimationInfo _workingTransformPan;
    struct PVTransformAnimationInfo _workingTransformRotate;
    CDStruct_1b6d18a9 _lastTransformAnimationTime;
    int _mediaStartOffset;
    int _timeScale;
    NSMutableArray *_transforms;
    _Bool _keyframeTransforms;
    _Bool _verticalMedia;
    int _pendingTransformCount;
    int _clipTransformInitialStartOffset;
}

@property (nonatomic) int clipTransformInitialStartOffset;

+ (id)sharedInstance;

- (id)init;
- (double)maximumX:(double)arg1 scale:(double)arg2;
- (double)maximumY:(double)arg1 scale:(double)arg2;
- (void)prepareClipForScale:(struct CGSize)arg1 destSize:(struct CGSize)arg2;
- (_Bool)isEditingTransform;
- (id)scaleClip:(struct CGSize)arg1 scale:(double)arg2 time:(int)arg3 atLocation:(struct CGPoint)arg4;
- (void)applyTransform:(struct PVTransformAnimationInfo *)arg1 shouldCommit:(_Bool)arg2 outTransform:(id *)arg3;
- (void)snapToEdgeEnd:(id)arg1;
- (void)panWithDelta:(struct CGPoint)arg1 time:(int)arg2 outTransform:(id *)arg3;
- (void)scaleWithDelta:(double)arg1 location:(struct CGPoint)arg2 time:(int)arg3 outTransform:(id *)arg4;
- (void)rotateWithDelta:(double)arg1 location:(struct CGPoint)arg2 time:(int)arg3 outTransform:(id *)arg4;
- (_Bool)tooMuchX:(double)arg1 scale:(double)arg2;
- (_Bool)tooMuchY:(double)arg1 scale:(double)arg2;
- (void)updateTransformScale:(id)arg1 mediaSize:(struct CGSize)arg2 viewSize:(struct CGSize)arg3 location:(struct CGPoint)arg4 outTransform:(id *)arg5;
- (void)beginEditingTransform:(id)arg1 mediaSize:(struct CGSize)arg2 viewSize:(struct CGSize)arg3 atTime:(int)arg4 keyframeTransforms:(_Bool)arg5 mediaStartOffset:(int)arg6 timeScale:(int)arg7 transformType:(int)arg8;
- (void)updateTransform:(id)arg1 location:(struct CGPoint)arg2 atTime:(int)arg3 delta:(struct CGPoint)arg4 transformType:(int)arg5 outTransform:(id *)arg6;
- (void)endEditingTransform:(id)arg1 transformType:(int)arg2 outTransform:(id *)arg3;

@end
