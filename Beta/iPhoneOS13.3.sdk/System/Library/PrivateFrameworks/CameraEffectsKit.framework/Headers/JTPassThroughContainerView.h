/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIView.h>

@protocol JTPassThroughContainerViewDelegate;

@interface JTPassThroughContainerView : UIView

{
    id <JTPassThroughContainerViewDelegate> _delegate;
}

@property (weak, nonatomic) id <JTPassThroughContainerViewDelegate> delegate;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
