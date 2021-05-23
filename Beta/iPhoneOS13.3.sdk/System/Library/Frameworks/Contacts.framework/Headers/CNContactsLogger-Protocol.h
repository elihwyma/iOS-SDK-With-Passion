/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/Swift-Protocol.h>

@protocol CNContactsLogger <Swift>

- (unsigned short)tccAccessPreflightWasDenied;
- (unsigned short)tccAccessRequestWasDenied;
- (unsigned short)XPCConnectionWasInterrupted;
- (unsigned short)XPCConnectionWasInvalidated;
- (unsigned short)serviceError: /* Error: Ran out of types for this method. */;
- (unsigned short)noAccessToContactsWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)didFetchContacts:error: /* Error: Ran out of types for this method. */;
- (unsigned short)didFetchEncodedContacts:error: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchingContactsBatch: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchContactsMatchingPredicate:unifyResults:keysToFetch: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchEncodedContactsMatchingPredicate:unifyResults:keysToFetch: /* Error: Ran out of types for this method. */;
- (unsigned short)saveRequestInvalid: /* Error: Ran out of types for this method. */;
- (unsigned short)saveRequestFailed: /* Error: Ran out of types for this method. */;
- (unsigned short)addingContacts:toContainerWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)deletingContact: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteImageRecentsMetadataRequestFailed: /* Error: Ran out of types for this method. */;
- (unsigned short)updatingContact: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchContactsProgressivelyMatchingPredicate:unifyResults:keysToFetch: /* Error: Ran out of types for this method. */;
- (unsigned short)settingDefaultAccount: /* Error: Ran out of types for this method. */;
- (unsigned short)resettingSortDataIfNeeded: /* Error: Ran out of types for this method. */;
- (unsigned short)contactsAccessWasGranted: /* Error: Ran out of types for this method. */;
- (unsigned short)requestingAccessForContacts: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchingMeContactIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)changedMeContact: /* Error: Ran out of types for this method. */;
- (unsigned short)changingMeContact: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchingContactCount: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchingContactSectionCounts: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchingContacts: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchingGroups: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchingContainers: /* Error: Ran out of types for this method. */;
- (unsigned short)saving: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchingDefaultContainerIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchingContactWithUserActivity: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchingContactIdentifierWithMatchingDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)registeringForChangeHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisteringForChangeHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchingChangeHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)clearingChangeHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)postingNotificationWithName: /* Error: Ran out of types for this method. */;
- (unsigned short)postingNotification: /* Error: Ran out of types for this method. */;
- (unsigned short)applyContactUpdateOfKind:value:property: /* Error: Ran out of types for this method. */;
- (unsigned short)setContactImageData: /* Error: Ran out of types for this method. */;
- (unsigned short)removeContactImageData;
- (unsigned short)setContactImageData:format:cropRect: /* Error: Ran out of types for this method. */;
- (unsigned short)setContactImageDataZeroCropRect:format: /* Error: Ran out of types for this method. */;
- (unsigned short)servicingContactsRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)SPIUsageLackingEntitlementGrantedForPID: /* Error: Ran out of types for this method. */;
- (unsigned short)SPIUsageLackingEntitlementRejectedForPID: /* Error: Ran out of types for this method. */;
- (unsigned short)internalError: /* Error: Ran out of types for this method. */;
- (unsigned short)errorWhenQueryingTetheredSyncData: /* Error: Ran out of types for this method. */;

@end
