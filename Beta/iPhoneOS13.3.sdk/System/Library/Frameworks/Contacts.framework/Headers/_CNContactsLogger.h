/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_os_log;

@interface _CNContactsLogger : NSObject

{
    NSObject<OS_os_log> *_log;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)tccAccessPreflightWasDenied;
- (void)tccAccessRequestWasDenied;
- (void)XPCConnectionWasInterrupted;
- (void)XPCConnectionWasInvalidated;
- (void)serviceError:(id)arg1;
- (void)noAccessToContactsWithError:(id)arg1;
- (void)didFetchContacts:(id)arg1 error:(id)arg2;
- (void)didFetchEncodedContacts:(id)arg1 error:(id)arg2;
- (void)fetchingContactsBatch:(CDUnknownBlockType)arg1;
- (void)fetchContactsMatchingPredicate:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3;
- (void)fetchEncodedContactsMatchingPredicate:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3;
- (void)saveRequestInvalid:(id)arg1;
- (void)saveRequestFailed:(id)arg1;
- (void)addingContacts:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (void)deletingContact:(id)arg1;
- (void)deleteImageRecentsMetadataRequestFailed:(id)arg1;
- (void)updatingContact:(id)arg1;
- (void)fetchContactsProgressivelyMatchingPredicate:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3;
- (void)settingDefaultAccount:(CDUnknownBlockType)arg1;
- (void)resettingSortDataIfNeeded:(CDUnknownBlockType)arg1;
- (void)contactsAccessWasGranted:(_Bool)arg1;
- (void)requestingAccessForContacts:(CDUnknownBlockType)arg1;
- (void)fetchingMeContactIdentifier:(CDUnknownBlockType)arg1;
- (void)changedMeContact:(id)arg1;
- (void)changingMeContact:(CDUnknownBlockType)arg1;
- (void)fetchingContactCount:(CDUnknownBlockType)arg1;
- (void)fetchingContactSectionCounts:(CDUnknownBlockType)arg1;
- (void)fetchingContacts:(CDUnknownBlockType)arg1;
- (void)fetchingGroups:(CDUnknownBlockType)arg1;
- (void)fetchingContainers:(CDUnknownBlockType)arg1;
- (void)saving:(CDUnknownBlockType)arg1;
- (void)fetchingDefaultContainerIdentifier:(CDUnknownBlockType)arg1;
- (void)fetchingContactWithUserActivity:(CDUnknownBlockType)arg1;
- (void)fetchingContactIdentifierWithMatchingDictionary:(CDUnknownBlockType)arg1;
- (void)registeringForChangeHistory:(CDUnknownBlockType)arg1;
- (void)unregisteringForChangeHistory:(CDUnknownBlockType)arg1;
- (void)fetchingChangeHistory:(CDUnknownBlockType)arg1;
- (void)clearingChangeHistory:(CDUnknownBlockType)arg1;
- (void)postingNotificationWithName:(id)arg1;
- (void)postingNotification:(CDUnknownBlockType)arg1;
- (void)applyContactUpdateOfKind:(const char *)arg1 value:(id)arg2 property:(id)arg3;
- (void)setContactImageData:(id)arg1;
- (void)removeContactImageData;
- (void)setContactImageData:(id)arg1 format:(const char *)arg2 cropRect:(struct CGRect)arg3;
- (void)setContactImageDataZeroCropRect:(id)arg1 format:(const char *)arg2;
- (void)servicingContactsRequest:(CDUnknownBlockType)arg1;
- (void)SPIUsageLackingEntitlementGrantedForPID:(int)arg1;
- (void)SPIUsageLackingEntitlementRejectedForPID:(int)arg1;
- (void)internalError:(id)arg1;
- (void)errorWhenQueryingTetheredSyncData:(id)arg1;
- (void)_commonFetchContactsMatchingPredicate:(id)arg1 fetchType:(const char *)arg2 unifyResults:(_Bool)arg3 keysToFetch:(id)arg4;

@end
