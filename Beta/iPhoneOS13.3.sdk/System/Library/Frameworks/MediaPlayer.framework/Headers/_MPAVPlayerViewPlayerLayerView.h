/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@class AVPlayerLayer;

@interface _MPAVPlayerViewPlayerLayerView : UIView

@property (nonatomic, readonly) AVPlayerLayer *layer;

+ (Class)layerClass;

@end
