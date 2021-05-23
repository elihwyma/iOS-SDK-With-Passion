/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIViewController.h>

@class ICCircularProgressView, NSProgress, UIActivityIndicatorView, UILabel;

@protocol ICProgressViewControllerDelegate;

@interface ICProgressViewController : UIViewController

{
    _Bool _showsCancel;
    NSProgress *_observedProgress;
    id <ICProgressViewControllerDelegate> _progressDelegate;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    ICCircularProgressView *_circularProgressView;
}

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) ICCircularProgressView *circularProgressView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSProgress *observedProgress;
@property (nonatomic) _Bool showsCancel;
@property (weak, nonatomic) id <ICProgressViewControllerDelegate> progressDelegate;

- (id)initWithDelegate:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;

@end
