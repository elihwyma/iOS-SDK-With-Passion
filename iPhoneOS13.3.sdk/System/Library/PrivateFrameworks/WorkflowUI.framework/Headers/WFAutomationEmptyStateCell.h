//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class WFAutomationTypeExplanationPlatterView;

@interface WFAutomationEmptyStateCell : UITableViewCell
{
    WFAutomationTypeExplanationPlatterView *_automationTypeView;
}

@property(readonly, nonatomic) WFAutomationTypeExplanationPlatterView *automationTypeView; // @synthesize automationTypeView=_automationTypeView;
// - (void).cxx_destruct;
- (void)configureForAutomationType:(NSUInteger)arg1 buttonTarget:(id)arg2 action:(SEL)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

