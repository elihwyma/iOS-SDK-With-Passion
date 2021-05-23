/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <ContactsFoundation/CNObservable.h>

@class ABPredicate, CNCancelationToken, CNContactsEnvironment, NSString;

@protocol CNObserver;

__attribute__((visibility("hidden")))
@interface _CNABPredicateObservable : CNObservable

{
    void *_addressBook;
    unsigned int _sortOrdering;
    ABPredicate *_predicate;
    unsigned long long _options;
    CNContactsEnvironment *_environment;
    CNCancelationToken *_cancelationToken;
    id <CNObserver> _observer;
}

@property (nonatomic, readonly) ABPredicate *predicate;
@property (nonatomic, readonly) unsigned int sortOrdering;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) void *addressBook;
@property (nonatomic, readonly) CNContactsEnvironment *environment;
@property (nonatomic, readonly) CNCancelationToken *cancelationToken;
@property (retain, nonatomic) id <CNObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)observableWithPredicates:(id)arg1 sortOrdering:(unsigned int)arg2 options:(unsigned long long)arg3 addressBook:(void *)arg4 environment:(id)arg5;
+ (id)schedulerForIdentifier:(id)arg1 provider:(id)arg2;
+ (id)makeSerialFetchSchedulerUsingSchedulerProvider:(id)arg1;

- (void)dealloc;
- (id)subscribe:(id)arg1;
- (id)initWithPredicate:(id)arg1 sortOrdering:(unsigned int)arg2 options:(unsigned long long)arg3 addressBook:(void *)arg4 environment:(id)arg5;
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2 moreComing:(_Bool)arg3;
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2 metadata:(id)arg3;
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;
- (_Bool)predicateShouldContinue:(id)arg1;

@end
