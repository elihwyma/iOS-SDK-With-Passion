/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDataPlanAccountAlertItem.h>

@class NSString;

@interface SBDataPlanFailureAlertItem : SBDataPlanAccountAlertItem

{
    NSString *_carrierName;
    _Bool _newAccount;
}

@property (copy, nonatomic) NSString *carrierName;
@property (nonatomic, getter=isNewAccount) _Bool newAccount;

+ (id)laterButtonTitle;
+ (id)nowButtonTitle;

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithAccountURL:(id)arg1 carrierName:(id)arg2 newAccount:(_Bool)arg3;

@end
