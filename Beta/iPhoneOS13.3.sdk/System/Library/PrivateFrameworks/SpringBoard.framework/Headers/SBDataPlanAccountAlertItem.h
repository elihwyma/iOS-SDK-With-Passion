/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDataPlanAlertItem.h>

@class NSURL;

@interface SBDataPlanAccountAlertItem : SBDataPlanAlertItem

{
    NSURL *_accountURL;
}

@property (copy, nonatomic) NSURL *accountURL;

+ (id)laterButtonTitle;
+ (id)nowButtonTitle;

- (id)initWithAccountURL:(id)arg1;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)notNow;
- (void)takeAction;

@end
