//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface HRWDSpinnerView : UIView
{
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
}

// - (void).cxx_destruct;
- (void)stopSpinner;
- (void)startSpinner;
- (void)setMessageWhileSpinning:(id)arg1;
@property(readonly, nonatomic, getter=isAnimating) BOOL animating;
- (void)_setupSubviews;
- (id)init;

@end

