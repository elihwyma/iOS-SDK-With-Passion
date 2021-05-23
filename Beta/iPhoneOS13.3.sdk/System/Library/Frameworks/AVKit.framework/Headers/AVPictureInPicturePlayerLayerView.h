/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIView.h>

@class AVPlayerLayer, _AVSimplePlayerLayerView;

@interface AVPictureInPicturePlayerLayerView : UIView

{
    _AVSimplePlayerLayerView *_simplePlayerLayerView;
}

@property (nonatomic, readonly) AVPlayerLayer *playerLayer;

- (void)attachPlayerLayer;
- (void)detachPlayerLayer;

@end
