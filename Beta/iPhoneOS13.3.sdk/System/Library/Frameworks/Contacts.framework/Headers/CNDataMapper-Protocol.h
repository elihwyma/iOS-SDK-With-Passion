/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/Swift-Protocol.h>

@class NSString;

@protocol CNDataMapper <Swift>

@property (retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property (retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;

- (unsigned short)meContactIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)groupsMatchingPredicate:error: /* Error: Ran out of types for this method. */;
- (unsigned short)subgroupsOfGroupWithIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)containersMatchingPredicate:error: /* Error: Ran out of types for this method. */;
- (unsigned short)serverSearchContainersMatchingPredicate:error: /* Error: Ran out of types for this method. */;
- (unsigned short)defaultContainerIdentifier;
- (unsigned short)policyForContainerWithIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsMatchingPredicate:error: /* Error: Ran out of types for this method. */;
- (unsigned short)executeSaveRequest:error: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithContactsEnvironment:managedConfiguration: /* Error: Ran out of types for this method. */;
- (unsigned short)requestAccessForEntityType:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestAccessForEntityType:error: /* Error: Ran out of types for this method. */;
- (unsigned short)executeSaveRequest:response:authorizationContext:error: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizedKeysForContactKeys:error: /* Error: Ran out of types for this method. */;
- (unsigned short)contactObservableForFetchRequest: /* Error: Ran out of types for this method. */;

@end
