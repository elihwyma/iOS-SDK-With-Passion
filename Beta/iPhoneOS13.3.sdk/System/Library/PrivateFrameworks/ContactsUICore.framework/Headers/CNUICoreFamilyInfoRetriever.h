/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNFuture, FAFetchFamilyCircleRequest, NSString;

@protocol CNSchedulerProvider, CNUICoreContactStoreFacade;

@interface CNUICoreFamilyInfoRetriever : NSObject

{
    _Bool _matchFamilyMembersWithContacts;
    id <CNUICoreContactStoreFacade> _mainContactStore;
    FAFetchFamilyCircleRequest *_fetchFamilyCircleRequest;
    id <CNSchedulerProvider> _schedulerProvider;
    CNFuture *_familyFuture;
}

@property (nonatomic, readonly) id <CNUICoreContactStoreFacade> mainContactStore;
@property (nonatomic, readonly) FAFetchFamilyCircleRequest *fetchFamilyCircleRequest;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic, readonly) _Bool matchFamilyMembersWithContacts;
@property (retain, nonatomic) CNFuture *familyFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)keysToFetch;
+ (id)meContactFromStore:(id)arg1 schedulerProvider:(id)arg2;
+ (id)familyCircleFromRequest:(id)arg1 schedulerProvider:(id)arg2;
+ (id)familyInfoWithFamilyMembers:(id)arg1 meContact:(id)arg2 matchedWithContactsInContactStore:(id)arg3;
+ (id)familyInfoWithFamilyMembers:(id)arg1 meContact:(id)arg2;
+ (id)contactsMatchingFamilyMember:(id)arg1 inContactStore:(id)arg2;

- (id)init;
- (id)familyInfo;
- (id)initWithMainContactStoreFacade:(id)arg1 matchFamilyMembersWithContacts:(_Bool)arg2 schedulerProvider:(id)arg3;
- (id)initWithMainContactStoreFacade:(id)arg1 fetchFamilyCircleRequest:(id)arg2 matchFamilyMembersWithContacts:(_Bool)arg3 schedulerProvider:(id)arg4;
- (id)createFamilyFuture;

@end
