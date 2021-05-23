/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDataPlanAccountAlertItem.h>

@class NSDate;

@interface SBDataPlanExpirationAlertItem : SBDataPlanAccountAlertItem

{
    NSDate *_expirationDate;
}

@property (retain, nonatomic) NSDate *expirationDate;

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithAccountURL:(id)arg1 expirationDate:(id)arg2;

@end
