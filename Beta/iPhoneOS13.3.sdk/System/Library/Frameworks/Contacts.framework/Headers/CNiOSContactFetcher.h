/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactFetchRequest, CNContactsEnvironment, CNManagedConfiguration;

__attribute__((visibility("hidden")))
@interface CNiOSContactFetcher : NSObject

{
    void *_addressBook;
    CNContactFetchRequest *_fetchRequest;
    CDUnknownBlockType _personToContact;
    CNContactsEnvironment *_environment;
    CNManagedConfiguration *_managedConfiguration;
}

@property (nonatomic, readonly) void *addressBook;
@property (nonatomic, readonly) CNContactFetchRequest *fetchRequest;

+ (CDUnknownBlockType)linkedPeopleComparator;
+ (id)contactsForFetchRequest:(id)arg1 matchInfos:(id *)arg2 inAddressBook:(void *)arg3 environment:(id)arg4 managedConfiguration:(id)arg5 error:(id *)arg6;

- (void)dealloc;
- (id)executeFetchRequestWithProgressiveResults:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFetchRequest:(id)arg1 addressBook:(void *)arg2 environment:(id)arg3 managedConfiguration:(id)arg4;
- (id)fetchContactsReturningMatchInfos:(id *)arg1 error:(id *)arg2;
- (void)_batchLoadPropertiesForPeople:(id)arg1 keysToFetch:(id)arg2;
- (id)unifyPeople:(id)arg1 keysToFetch:(id)arg2 abMatchInfos:(id)arg3 filteredForAccountIdentifiers:(id)arg4 outCNMatchInfos:(id *)arg5;
- (id)_abMatchMetadataToCNContactMatchInfoArray:(id)arg1;
- (id)_contactsFromPeople:(id)arg1 abMatchInfo:(id)arg2 keysToFetch:(id)arg3;

@end
