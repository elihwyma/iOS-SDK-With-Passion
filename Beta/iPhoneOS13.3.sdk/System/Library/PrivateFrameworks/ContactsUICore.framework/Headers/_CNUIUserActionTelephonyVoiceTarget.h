/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <ContactsUICore/CNUIUserActionTarget.h>

@interface _CNUIUserActionTelephonyVoiceTarget : CNUIUserActionTarget

- (id)init;
- (id)actionsForContact:(id)arg1 discoveringEnvironment:(id)arg2;
- (id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)ttyActionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)phoneCallActionWithDestinationID:(id)arg1 contactProperty:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)ttyActionsFutureForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)TTYCallActionWithDestinationID:(id)arg1 contactProperty:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)TTYRelayCallActionWithDestinationID:(id)arg1 contactProperty:(id)arg2 discoveringEnvironment:(id)arg3;

@end
