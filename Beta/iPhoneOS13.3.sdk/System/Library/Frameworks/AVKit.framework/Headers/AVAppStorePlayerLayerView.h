/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIView.h>

@class AVPlayerLayer;

__attribute__((visibility("hidden")))
@interface AVAppStorePlayerLayerView : UIView

@property (nonatomic, readonly) AVPlayerLayer *layer;

+ (Class)layerClass;

@end
