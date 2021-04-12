//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class FMFLocation, NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface FMFTitleView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSLayoutConstraint *_titleBottomConstraint;
    FMFLocation *_location;
}

@property(retain, nonatomic) FMFLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSLayoutConstraint *titleBottomConstraint; // @synthesize titleBottomConstraint=_titleBottomConstraint;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
- (void)_updateLabels:(id)arg1;
- (void)updateLocation:(id)arg1;
- (id)initFromNib;

@end

