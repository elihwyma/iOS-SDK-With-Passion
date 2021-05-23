/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <AVFoundation/AVPlayerItem.h>

@class AltClipCollection, OrientationInfo;

@interface VEKPlayerItem : AVPlayerItem

{
    AltClipCollection *_altInfo;
    OrientationInfo *_currentAltInfo;
    struct CGSize _targetSize;
}

@property (retain, nonatomic) AltClipCollection *altInfo;
@property (weak, nonatomic) OrientationInfo *currentAltInfo;
@property (nonatomic) struct CGSize targetSize;
@property (nonatomic, readonly) _Bool isRotated;
@property (nonatomic, readonly) double aspect;

@end
