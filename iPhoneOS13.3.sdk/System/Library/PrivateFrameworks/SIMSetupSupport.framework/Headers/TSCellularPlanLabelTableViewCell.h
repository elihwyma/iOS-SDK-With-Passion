//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class CNGeminiBadge, UILabel;

@interface TSCellularPlanLabelTableViewCell : UITableViewCell
{
    CNGeminiBadge *_badge;
    UILabel *_label;
}

@property(retain) UILabel *label; // @synthesize label=_label;
@property(retain) CNGeminiBadge *badge; // @synthesize badge=_badge;
// - (void).cxx_destruct;
- (void)setLabel:(id)arg1 badge:(id)arg2;
- (void)setLabelWithNoBadge:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

