/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNSchedulerProvider, NSString;

@protocol CNScheduler, CNUICoreContactStoreFacade, CNUICoreFamilyInfoFetching;

@interface CNUICoreFamilyMemberContactsModelRetriever : NSObject

{
    id <CNUICoreContactStoreFacade> _contactStore;
    id <CNUICoreFamilyInfoFetching> _familyInfoFetcher;
    CNSchedulerProvider *_schedulerProvider;
}

@property (nonatomic, readonly) id <CNUICoreContactStoreFacade> contactStore;
@property (nonatomic, readonly) id <CNUICoreFamilyInfoFetching> familyInfoFetcher;
@property (nonatomic, readonly) CNSchedulerProvider *schedulerProvider;
@property (nonatomic, readonly) id <CNScheduler> backgroundOrImmediateScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)keysToFetch;
+ (long long)contactFormatterStyle;

- (id)init;
- (id)allContacts;
- (id)initWithSchedulerProvider:(id)arg1;
- (id)initWithFamilyMember:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithContactStoreFacade:(id)arg1 familyInfoFetcher:(id)arg2 schedulerProvider:(id)arg3;
- (id)allContactsModel;
- (id)whitelistedContactsModel;

@end
