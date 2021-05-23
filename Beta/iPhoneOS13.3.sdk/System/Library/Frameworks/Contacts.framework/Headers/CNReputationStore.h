/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNReputationContactsAdapter, CNReputationCoreRecentsAdapter, CNReputationLogger;

@protocol CNSchedulerProvider;

@interface CNReputationStore : NSObject

{
    CNReputationCoreRecentsAdapter *_coreRecentsAdapter;
    CNReputationContactsAdapter *_contactsAdapter;
    CNReputationLogger *_logger;
    id <CNSchedulerProvider> _schedulerProvider;
}

@property (nonatomic, readonly) CNReputationCoreRecentsAdapter *coreRecentsAdapter;
@property (nonatomic, readonly) CNReputationContactsAdapter *contactsAdapter;
@property (nonatomic, readonly) CNReputationLogger *logger;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;

- (id)init;
- (id)initWithCoreRecentsAdapter:(id)arg1 contactsAdapter:(id)arg2 logger:(id)arg3 schedulerProvider:(id)arg4;
- (id)makeFutureForHandle:(id)arg1;
- (id)reputationForHandle:(id)arg1 timeout:(double)arg2 error:(id *)arg3;

@end
