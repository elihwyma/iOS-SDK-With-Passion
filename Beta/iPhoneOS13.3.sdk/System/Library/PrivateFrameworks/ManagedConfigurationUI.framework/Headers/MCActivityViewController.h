/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UIActivityIndicatorView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MCActivityViewController : UIViewController

{
    _Bool _isInProgress;
    NSString *_inProgresText;
    NSString *_completionText;
    NSString *_longWaitingWarningText;
    double _longWaitingWarningThreshold;
    UIActivityIndicatorView *_spinnerView;
    UIImageView *_completionIconImageView;
    UILabel *_textLabel;
    UILabel *_longWaitingWarningLabel;
}

@property (retain, nonatomic) UIActivityIndicatorView *spinnerView;
@property (retain, nonatomic) UIImageView *completionIconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *longWaitingWarningLabel;
@property (nonatomic) _Bool isInProgress;
@property (retain, nonatomic) NSString *inProgresText;
@property (retain, nonatomic) NSString *completionText;
@property (retain, nonatomic) NSString *longWaitingWarningText;
@property (nonatomic) double longWaitingWarningThreshold;

- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)_scheduleLongWaitingWarning;
- (void)completeActivityAnimated:(_Bool)arg1;

@end
