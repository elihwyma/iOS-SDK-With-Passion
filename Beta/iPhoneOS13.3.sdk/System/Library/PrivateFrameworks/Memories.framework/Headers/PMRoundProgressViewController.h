/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIViewController.h>

@class NSString, PMRoundProgressView, UIButton, UILabel, UIScreenEdgePanGestureRecognizer;

@interface PMRoundProgressViewController : UIViewController

{
    _Bool _didFadeOut;
    UILabel *_label;
    PMRoundProgressView *_progressView;
    UIButton *_leftCancelButton;
    UIButton *_rightCancelButton;
    UIScreenEdgePanGestureRecognizer *_screenEdgePanLeftGestureRecognizer;
}

@property (nonatomic) _Bool didFadeOut;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) PMRoundProgressView *progressView;
@property (retain, nonatomic) UIButton *leftCancelButton;
@property (retain, nonatomic) UIButton *rightCancelButton;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanLeftGestureRecognizer;
@property (retain, nonatomic) NSString *labelText;
@property (nonatomic) float progress;
@property (nonatomic) _Bool showCancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)cancelButton;
- (id)nibBundle;
- (_Bool)prefersStatusBarHidden;
- (void)configureView;
- (void)handlePanFromEdge:(id)arg1;
- (void)setCancelTarget:(id)arg1 action:(SEL)arg2;

@end
