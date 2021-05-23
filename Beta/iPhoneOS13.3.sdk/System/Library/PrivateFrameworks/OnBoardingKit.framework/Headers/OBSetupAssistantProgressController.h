/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@class UILabel, UIProgressView;

@interface OBSetupAssistantProgressController

{
    UIProgressView *_progressBar;
    UILabel *_progressLabel;
}

@property (retain, nonatomic) UIProgressView *progressBar;
@property (retain, nonatomic) UILabel *progressLabel;

- (void)setTitle:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)_progressFont;
- (void)setProgressText:(id)arg1;

@end
