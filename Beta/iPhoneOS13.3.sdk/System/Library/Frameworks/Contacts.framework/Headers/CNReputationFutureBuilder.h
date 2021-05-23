/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNFuture, CNReputationContactsAdapter, CNReputationCoreRecentsAdapter, CNReputationHandle, CNReputationLogger;

__attribute__((visibility("hidden")))
@interface CNReputationFutureBuilder : NSObject

{
    CNReputationHandle *_handle;
    CNReputationCoreRecentsAdapter *_coreRecentsAdapter;
    CNReputationContactsAdapter *_contactsAdapter;
    CNReputationLogger *_logger;
    CNFuture *_scoreFuture;
}

@property (copy, nonatomic, readonly) CNReputationHandle *handle;
@property (nonatomic, readonly) CNReputationCoreRecentsAdapter *coreRecentsAdapter;
@property (nonatomic, readonly) CNReputationContactsAdapter *contactsAdapter;
@property (nonatomic, readonly) CNReputationLogger *logger;
@property (retain, nonatomic) CNFuture *scoreFuture;

- (id)build;
- (id)initWithHandle:(id)arg1 coreRecentsAdapter:(id)arg2 contactsAdapter:(id)arg3 logger:(id)arg4;
- (id)coreRecentsTrustForHandle:(id)arg1;
- (id)contactsTrustForEmailAddress:(id)arg1;
- (id)contactsTrustForPhoneNumber:(id)arg1;
- (void)addCoreRecentsTrust;
- (void)addContactsTrustForEmailAddress;
- (void)addContactsTrustForPhoneNumber;

@end
