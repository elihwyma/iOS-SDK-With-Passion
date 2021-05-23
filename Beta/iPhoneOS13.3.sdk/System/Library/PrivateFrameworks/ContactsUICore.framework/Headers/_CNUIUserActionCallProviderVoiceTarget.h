/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <ContactsUICore/CNUIUserActionTarget.h>

@interface _CNUIUserActionCallProviderVoiceTarget : CNUIUserActionTarget

- (id)actionsForContact:(id)arg1 discoveringEnvironment:(id)arg2;
- (id)actionsForEmailAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForSocialProfiles:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForInstantMessageAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)managedBundleIdentifierForContact:(id)arg1 discoveringEnvironment:(id)arg2;
- (id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 group:(long long)arg3 options:(unsigned long long)arg4 discoveringEnvironment:(id)arg5;
- (_Bool)isCallProviderManagedUsingDiscoveringEnvironment:(id)arg1;
- (id)externalAccountIdentifierForContact:(id)arg1 contactStore:(id)arg2;

@end
