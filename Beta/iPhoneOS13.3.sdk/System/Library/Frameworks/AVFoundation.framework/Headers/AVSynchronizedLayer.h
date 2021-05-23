/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <QuartzCore/CALayer.h>

@class AVPlayerItem, AVSynchronizedLayerInternal;

@interface AVSynchronizedLayer : CALayer

{
    AVSynchronizedLayerInternal *_syncLayer;
}

@property (retain, nonatomic) AVPlayerItem *playerItem;

+ (id)synchronizedLayerWithPlayerItem:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (void)_removeSelfFromPlayerItem;

@end
