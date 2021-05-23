/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class AVPlayerLayer;

@interface _PXTrimToolPlayerWrapperAVPlayerView : UIView

@property (nonatomic, readonly) AVPlayerLayer *playerLayer;

+ (Class)layerClass;

- (id)initWithPlayer:(id)arg1;

@end
