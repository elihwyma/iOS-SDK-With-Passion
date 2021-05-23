/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <Contacts/CNContact.h>

@interface CNContact (IMAssistantCore)

- (id)__im_assistant_handlesMatchingRequestedHandleType:(long long)arg1 requestedHandleLabel:(id)arg2;
- (id)__im_assistant_handlesMatchingHandleID:(id)arg1;
- (id)__im_assistant_matchingNormalizedHandlesForType:(long long)arg1 andLabel:(id)arg2 forCountryCode:(id)arg3;
- (id)__im_assistant_allValidPersonOptionsWithAccountDataSource:(id)arg1;
- (id)__im_assistant_phoneNumbersMatchingLabel:(id)arg1;
- (id)__im_assistant_emailAddressesMatchingLabel:(id)arg1;
- (id)__im_assistant_allIMHandles;

@end
