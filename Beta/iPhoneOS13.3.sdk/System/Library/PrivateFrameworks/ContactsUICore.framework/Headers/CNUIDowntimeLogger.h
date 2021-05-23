/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@protocol OS_os_log;

@interface CNUIDowntimeLogger : NSObject

{
    NSObject<OS_os_log> *_log;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *log;

+ (id)sharedLogger;

- (id)init;
- (id)initWithLog:(id)arg1;
- (void)logSuccessFetchingContacts:(id)arg1 ofFamilyMember:(id)arg2;
- (void)logFailure:(id)arg1 fetchingContactsOfFamilyMember:(id)arg2;
- (void)logResultOfFetchingContacts:(id)arg1 ofFamilyMember:(id)arg2;
- (void)logSuccessUpdatingContactListByAddingContacts:(id)arg1 ofFamilyMember:(id)arg2;
- (void)logFailure:(id)arg1 updatingContactListByAddingContacts:(id)arg2 ofFamilyMember:(id)arg3;
- (void)logSuccessUpdatingContactListByRemovingContacts:(id)arg1 ofFamilyMember:(id)arg2;
- (void)logFailure:(id)arg1 updatingContactListByRemovingContacts:(id)arg2 ofFamilyMember:(id)arg3;
- (void)logSuccessUpdatingContactWhitelistByAddingContacts:(id)arg1 ofFamilyMember:(id)arg2;
- (void)logFailure:(id)arg1 updatingContactWhitelistByAddingContacts:(id)arg2 ofFamilyMember:(id)arg3;
- (void)logSuccessUpdatingContactWhitelistByRemovingContacts:(id)arg1 ofFamilyMember:(id)arg2;
- (void)logFailure:(id)arg1 updatingContactWhitelistByRemovingContacts:(id)arg2 ofFamilyMember:(id)arg3;
- (void)logFetchingFamilyCircleError:(id)arg1;
- (void)logFetchingMeError:(id)arg1;

@end
