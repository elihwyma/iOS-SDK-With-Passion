//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/SBUIBannerView-Protocol.h>

@class SBUIBannerContext, UILabel;

@interface SBTestBannerView : UIView <SBUIBannerView>
{
    SBUIBannerContext *_context;
    UILabel *_label;
}

// - (void).cxx_destruct;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)bannerContext;
- (id)initWithContext:(id)arg1;

@end

