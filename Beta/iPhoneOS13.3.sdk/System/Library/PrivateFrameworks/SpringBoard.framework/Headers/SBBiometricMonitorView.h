/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@interface SBBiometricMonitorView : UIView

{
    UIView *_stateView;
    UIView *_presenceView;
    UIView *_poseView;
    long long _matchState;
    long long _presenceDetectState;
    long long _poseState;
}

@property (nonatomic) long long matchState;
@property (nonatomic) long long presenceDetectState;
@property (nonatomic) long long poseState;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
