/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Contacts/CNContactStore.h>

@interface CNContactStore (EmailContactUtilities)

- (id)em_fetchContactForEmailAddress:(id)arg1 keysToFetch:(id)arg2 createIfNeeded:(_Bool)arg3;
- (id)em_fetchContactForEmailAddress:(id)arg1 keysToFetch:(id)arg2 createIfNeeded:(_Bool)arg3 error:(id *)arg4;
- (id)_contactForEmailAddress:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)em_onScheduler:(id)arg1 contactFutureForEmailAddress:(id)arg2 keysToFetch:(id)arg3;

@end
