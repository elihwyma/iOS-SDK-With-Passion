//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUICoreContactStoreFacade-Protocol.h>

@class CNContact, NSArray, NSError;

@interface CNUICoreContactStoreTestFacade : NSObject <CNUICoreContactStoreFacade>
{
    NSArray *_contacts;
    NSArray *_executedSaveRequests;
    NSArray *_executedFetchRequests;
    CNContact *_meContact;
    NSError *_saveError;
    NSError *_fetchError;
}

+ (id)contactsBySimulatingExecutionOfSaveRequest:(id)arg1 onContacts:(id)arg2;
@property(retain, nonatomic) NSError *fetchError; // @synthesize fetchError=_fetchError;
@property(retain, nonatomic) NSError *saveError; // @synthesize saveError=_saveError;
@property(retain, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
@property(retain, nonatomic) NSArray *executedFetchRequests; // @synthesize executedFetchRequests=_executedFetchRequests;
@property(retain, nonatomic) NSArray *executedSaveRequests; // @synthesize executedSaveRequests=_executedSaveRequests;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
// - (void).cxx_destruct;
- (BOOL)executeSaveRequest:(id)arg1 error:(id )arg2;
- (BOOL)enumerateContactsWithFetchRequest:(id)arg1 error:(id )arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id )arg2;
- (void)commonInitWithMeContact:(id)arg1 contacts:(id)arg2 saveError:(id)arg3 fetchError:(id)arg4;
- (id)initWithMeContact:(id)arg1 contacts:(id)arg2;
- (id)initWithContacts:(id)arg1;
- (id)initWithSaveError:(id)arg1 fetchError:(id)arg2;
- (id)init;

@end

