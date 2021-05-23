/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet, NSString;

@interface MFFakeAccountsProvider : NSObject

{
    NSArray *_mailAccounts;
    NSArray *_orderedAccounts;
    NSSet *_displayedAccounts;
    NSSet *_autofetchAccounts;
}

@property (copy, nonatomic) NSArray *mailAccounts;
@property (copy, nonatomic) NSArray *orderedAccounts;
@property (copy, nonatomic) NSSet *displayedAccounts;
@property (copy, nonatomic) NSSet *autofetchAccounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isDisplayingMultipleAccounts) _Bool displayingMultipleAccounts;
@property (copy, nonatomic, readonly) NSArray *receivingAddresses;

@end
