/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSDate;

@protocol _SFDialogPresenting;

@interface _SFTelephonyNavigationMitigationPolicy : NSObject

{
    long long _classification;
    NSDate *_dateUserLastDeclined;
    id <_SFDialogPresenting> _dialogPresenter;
}

@property (weak, nonatomic) id <_SFDialogPresenting> dialogPresenter;

+ (double)test_suspiciousClassificationExpirationDuration;

- (void)_checkIfSuspiciousClassificationHasExpiredAndTransitionIfNeeded;
- (void)_handleInput:(long long)arg1;
- (_Bool)policyAppliesToURL:(id)arg1;
- (void)handleNavigationToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)userAcceptedCallPrompt;
- (void)userDeclinedCallPrompt;

@end
