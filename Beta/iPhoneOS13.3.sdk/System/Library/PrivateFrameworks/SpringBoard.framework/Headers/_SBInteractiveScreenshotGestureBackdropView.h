/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class CABackdropLayer;

@interface _SBInteractiveScreenshotGestureBackdropView : UIView

@property (nonatomic, readonly) CABackdropLayer *backdropLayer;

+ (Class)layerClass;

@end
