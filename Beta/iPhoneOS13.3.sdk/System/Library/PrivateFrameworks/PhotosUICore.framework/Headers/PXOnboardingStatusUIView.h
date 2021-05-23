/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UILabel, UIProgressView;

@interface PXOnboardingStatusUIView : UIView

{
    _Bool _paused;
    double _progress;
    NSString *_title;
    NSString *_descriptionText;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIProgressView *_progressView;
    NSArray *_constraints;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIProgressView *progressView;
@property (retain, nonatomic) NSArray *constraints;
@property (nonatomic) double progress;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;

- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)_createViews;

@end
