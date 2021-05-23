/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIView.h>

@protocol UIViewWindowListener;

@interface UIViewWindowNotifier : UIView

{
    id <UIViewWindowListener> _windowListener;
}

@property (weak, nonatomic) id <UIViewWindowListener> windowListener;

- (void)willMoveToWindow:(id)arg1;

@end
