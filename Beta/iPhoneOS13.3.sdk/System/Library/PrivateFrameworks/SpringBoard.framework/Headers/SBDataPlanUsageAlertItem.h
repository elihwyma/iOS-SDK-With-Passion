/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDataPlanAccountAlertItem.h>

@class NSNumber;

@interface SBDataPlanUsageAlertItem : SBDataPlanAccountAlertItem

{
    NSNumber *_remainingPortion;
}

@property (retain, nonatomic) NSNumber *remainingPortion;

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithAccountURL:(id)arg1 usage:(id)arg2;

@end
