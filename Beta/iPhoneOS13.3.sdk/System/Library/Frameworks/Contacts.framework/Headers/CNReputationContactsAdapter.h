/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactStore;

@protocol CNScheduler, CNSchedulerProvider;

__attribute__((visibility("hidden")))
@interface CNReputationContactsAdapter : NSObject

{
    CNContactStore *_contactStore;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNScheduler> _storeScheduler;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic, readonly) id <CNScheduler> storeScheduler;

- (id)init;
- (id)initWithContactStore:(id)arg1;
- (id)contactsForEmailAddress:(id)arg1;
- (id)contactsForPhoneNumber:(id)arg1;
- (id)initWithContactStore:(id)arg1 schedulerProvider:(id)arg2;
- (id)contactsForPredicate:(id)arg1 keys:(id)arg2;

@end
