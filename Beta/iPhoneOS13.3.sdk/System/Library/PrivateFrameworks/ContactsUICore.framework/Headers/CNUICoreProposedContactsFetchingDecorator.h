/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString;

@protocol CNSchedulerProvider, CNUICoreFamilyInfoFetching, CNUICoreFamilyMemberContactsModelFetching;

@interface CNUICoreProposedContactsFetchingDecorator : NSObject

{
    id <CNUICoreFamilyMemberContactsModelFetching> _modelFetcher;
    id <CNUICoreFamilyInfoFetching> _familyInfoFetcher;
    id <CNSchedulerProvider> _schedulerProvider;
}

@property (nonatomic, readonly) id <CNUICoreFamilyMemberContactsModelFetching> modelFetcher;
@property (nonatomic, readonly) id <CNUICoreFamilyInfoFetching> familyInfoFetcher;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)modelWithProposedContactsFromFamilyInfo:(id)arg1;

- (id)allContactsModel;
- (id)whitelistedContactsModel;
- (id)initWithModelFetcher:(id)arg1 familyMember:(id)arg2 schedulerProvider:(id)arg3;
- (id)initWithModelFetcher:(id)arg1 familyInfoFetcher:(id)arg2 schedulerProvider:(id)arg3;

@end
