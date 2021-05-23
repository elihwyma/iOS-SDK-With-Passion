/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMAccountController.h>

@class NSMutableDictionary;

@interface IMSimulatedAccountController : IMAccountController

{
    NSMutableDictionary *_simulatedAccountsPerService;
}

- (id)init;
- (id)activeAccounts;
- (id)activeIMessageAccount;
- (id)activeSMSAccount;
- (void)setSimulatedAccounts:(id)arg1 forServiceNamed:(id)arg2;

@end
