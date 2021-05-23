/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNContact, NSArray, NSError, NSString;

@interface CNUICoreContactStoreTestFacade : NSObject

{
    NSArray *_contacts;
    NSArray *_executedSaveRequests;
    NSArray *_executedFetchRequests;
    CNContact *_meContact;
    NSError *_saveError;
    NSError *_fetchError;
}

@property (retain, nonatomic) CNContact *meContact;
@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSError *saveError;
@property (retain, nonatomic) NSError *fetchError;
@property (retain, nonatomic) NSArray *executedSaveRequests;
@property (retain, nonatomic) NSArray *executedFetchRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contactsBySimulatingExecutionOfSaveRequest:(id)arg1 onContacts:(id)arg2;

- (id)init;
- (_Bool)enumerateContactsWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (id)initWithContacts:(id)arg1;
- (void)commonInitWithMeContact:(id)arg1 contacts:(id)arg2 saveError:(id)arg3 fetchError:(id)arg4;
- (id)initWithSaveError:(id)arg1 fetchError:(id)arg2;
- (id)initWithMeContact:(id)arg1 contacts:(id)arg2;

@end
