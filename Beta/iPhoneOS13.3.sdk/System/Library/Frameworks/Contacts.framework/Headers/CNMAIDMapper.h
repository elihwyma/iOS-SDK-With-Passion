/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CLSDataStore, NSString;

__attribute__((visibility("hidden")))
@interface CNMAIDMapper : NSObject

{
    CLSDataStore *_dataStore;
}

@property (nonatomic, readonly) CLSDataStore *dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property (retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;

+ (id)os_log;

- (id)init;
- (id)meContactIdentifiers:(id *)arg1;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)defaultContainerIdentifier;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (id)initWithContactsEnvironment:(id)arg1 managedConfiguration:(id)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 authorizationContext:(id)arg3 error:(id *)arg4;
- (id)contactObservableForFetchRequest:(id)arg1;
- (id)initWithDataStore:(id)arg1 environment:(id)arg2;

@end
