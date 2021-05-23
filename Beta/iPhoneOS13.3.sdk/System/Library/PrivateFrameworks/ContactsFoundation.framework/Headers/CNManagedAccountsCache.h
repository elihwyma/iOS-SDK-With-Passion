/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, CNCache;

@interface CNManagedAccountsCache : NSObject

{
    CNCache *_accountsCache;
    ACAccountStore *_accountStore;
}

@property (retain, nonatomic) CNCache *accountsCache;
@property (retain, nonatomic) ACAccountStore *accountStore;

+ (id)sharedCache;

- (id)init;
- (void)clearCache;
- (id)accountForIdentifier:(id)arg1;
- (id)accountsForIdentifiers:(id)arg1;

@end
