//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableFooterView.h>

@class UIButton;

@interface PKFindBankAccountInformationFooterView : PKTableFooterView
{
    UIButton *_accountInformationButton;
}

@property(retain, nonatomic) UIButton *accountInformationButton; // @synthesize accountInformationButton=_accountInformationButton;
// - (void).cxx_destruct;
- (CGSize)_sizeForButton:(id)arg1 constrainedToSize:(CGSize)arg2;
- (void)setButtonsEnabled:(BOOL)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

