/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDataPlanAlertItem.h>

@class NSString;

@interface SBDataPlanCompletionAlertItem : SBDataPlanAlertItem

{
    NSString *_carrierName;
    _Bool _newAccount;
}

@property (copy, nonatomic) NSString *carrierName;
@property (nonatomic, getter=isNewAccount) _Bool newAccount;

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithCarrierName:(id)arg1 newAccount:(_Bool)arg2;

@end
