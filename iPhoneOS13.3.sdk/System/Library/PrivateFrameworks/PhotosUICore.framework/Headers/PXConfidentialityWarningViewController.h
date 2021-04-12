//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UILabel, UIVisualEffectView;

@interface PXConfidentialityWarningViewController : UIViewController
{
    id /* CDUnknownBlockType */ _cancellationHandler;
    UIVisualEffectView *_effectView;
    UILabel *_messageLabel;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
}

@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(copy, nonatomic) id /* CDUnknownBlockType */ cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
// - (void).cxx_destruct;
- (void)_handleButton:(id)arg1;
- (void)presentAsOverlayInWindowScene:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

@end

