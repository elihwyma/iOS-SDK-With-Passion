/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactsEnvironment, CNiOSPersonFetchRequest;

__attribute__((visibility("hidden")))
@interface CNiOSPersonFetcher : NSObject

{
    CNiOSPersonFetchRequest *_fetchRequest;
    void *_addressBook;
    CNContactsEnvironment *_environment;
}

@property (nonatomic, readonly) CNiOSPersonFetchRequest *fetchRequest;
@property (nonatomic, readonly) void *addressBook;
@property (nonatomic, readonly) CNContactsEnvironment *environment;

+ (id)peopleForFetchRequest:(id)arg1 matchInfos:(id *)arg2 inAddressBook:(void *)arg3 environment:(id)arg4 error:(id *)arg5;

- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3;
- (id)fetchPeopleReturningMatchInfos:(id *)arg1 error:(id *)arg2;
- (id)fetchPeopleUsingNativeSortReturningMatchInfos:(id *)arg1 error:(id *)arg2;
- (_Bool)shouldSortInMemory;
- (id)sortPeople:(id)arg1;
- (id)executeFetchRequestWithProgressiveResults:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
