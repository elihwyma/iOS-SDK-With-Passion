//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class UIActivityIndicatorView, UIProgressView, UIView, _PXAlertContentViewController;

@interface PXAlertController : UIAlertController
{
    _PXAlertContentViewController *_contentViewController;
    UIActivityIndicatorView *_activityIndicatorView;
    UIProgressView *_progressView;
    UIView *_contentView;
}

+ (id)progressAlertControllerWithMessage:(id)arg1;
+ (id)activityAlertControllerWithTitle:(id)arg1 cancelHandler:(id /* CDUnknownBlockType */)arg2;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
// - (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

