/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface RCHitTestForwardingView : UIView

{
    UIView *_targetView;
}

@property (retain, nonatomic) UIView *targetView;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
