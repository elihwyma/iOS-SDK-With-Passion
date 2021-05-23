/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <UIKit/UIView.h>

@class AVPlayerLayer;

__attribute__((visibility("hidden")))
@interface TVPPlayerLayerView : UIView

@property (nonatomic, readonly) AVPlayerLayer *avPlayerLayer;

+ (Class)layerClass;

@end
