/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNReputationLogger : NSObject

+ (id)queryLog;
+ (id)obfuscateHandle:(id)arg1;
+ (id)describeScore:(long long)arg1;
+ (id)obfuscate:(id)arg1;
+ (id)performanceLog;

- (void)timeToResolve:(double)arg1;
- (void)beginQueryForHandle:(id)arg1;
- (void)queryForHandle:(id)arg1 didFinishWithReputation:(id)arg2;
- (void)queryForHandle:(id)arg1 didFailWithError:(id)arg2;
- (void)couldNotQueryCoreRecentsWithError:(id)arg1;
- (void)coreRecentsConfirmedTrust;
- (void)coreRecentsCouldNotConfirmTrust;
- (void)couldNotQueryContactsForEmailAddressWithError:(id)arg1;
- (void)contactsConfirmedTrustOfEmailAddress;
- (void)contactsCouldNotConfirmTrustOfEmailAddress;
- (void)couldNotQueryContactsForPhoneNumberWithError:(id)arg1;
- (void)contactsConfirmedTrustOfPhoneNumber;
- (void)contactsCouldNotConfirmTrustOfPhoneNumber;
- (void)reputationUnestablished;

@end
