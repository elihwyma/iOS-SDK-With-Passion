//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/EDAccountsProvider-Protocol.h>
#import <Message/MFAccountsProvider-Protocol.h>

@class NSArray, NSSet;

@interface MFFakeAccountsProvider : NSObject <MFAccountsProvider, EDAccountsProvider>
{
    NSArray *_mailAccounts;
    NSArray *_orderedAccounts;
    NSSet *_displayedAccounts;
    NSSet *_autofetchAccounts;
}

@property(copy, nonatomic) NSSet *autofetchAccounts; // @synthesize autofetchAccounts=_autofetchAccounts;
@property(copy, nonatomic) NSSet *displayedAccounts; // @synthesize displayedAccounts=_displayedAccounts;
@property(copy, nonatomic) NSArray *orderedAccounts; // @synthesize orderedAccounts=_orderedAccounts;
@property(copy, nonatomic) NSArray *mailAccounts; // @synthesize mailAccounts=_mailAccounts;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *receivingAddresses;
@property(readonly, nonatomic, getter=isDisplayingMultipleAccounts) BOOL displayingMultipleAccounts;

@end

