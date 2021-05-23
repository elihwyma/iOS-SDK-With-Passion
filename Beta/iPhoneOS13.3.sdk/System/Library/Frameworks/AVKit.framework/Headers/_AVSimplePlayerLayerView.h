/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIView.h>

@class AVPlayerLayer;

__attribute__((visibility("hidden")))
@interface _AVSimplePlayerLayerView : UIView

@property (nonatomic, readonly) AVPlayerLayer *playerLayer;

+ (Class)layerClass;
+ (id)keyPathsForValuesAffectingPlayerLayer;

@end
