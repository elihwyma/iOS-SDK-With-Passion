/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@interface MiroMovieView : UIView

+ (Class)layerClass;

- (id)player;
- (void)setPlayer:(id)arg1;
- (id)avPlayerLayer;
- (void)configurePlayerLayerAttributes;
- (void)cleanupPlayerLayerAttributes;

@end
