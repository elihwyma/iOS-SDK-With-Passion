/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <IMCore/IMAccount.h>

@interface IMAccount (CNFRegInternalUtilities)

- (id)loginDisplayString;
- (_Bool)CNFRegSignInComplete;
- (_Bool)CNFRegRegisteringLocalPhoneNumberSentinelAlias;
- (_Bool)CNFRegIsSignedOut;
- (_Bool)CNFRegSignInFailed;

@end
