/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class CAReplicatorLayer;

@interface _SBInteractiveScreenshotGestureReplicatorView : UIView

@property (nonatomic, readonly) CAReplicatorLayer *replicatorLayer;

+ (Class)layerClass;

@end
