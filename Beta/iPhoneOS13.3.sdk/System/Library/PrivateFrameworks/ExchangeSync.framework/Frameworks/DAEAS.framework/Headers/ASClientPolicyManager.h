/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASPolicyManager.h>

@class NSString;

@interface ASClientPolicyManager : ASPolicyManager

{
    NSString *_powerAssertionGroupIdentifier;
}

@property (retain, nonatomic) NSString *powerAssertionGroupIdentifier;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)requestPolicyUpdate;
- (void)policyKeyChanged:(id)arg1;
- (void)policyFailedToUpdate;

@end
