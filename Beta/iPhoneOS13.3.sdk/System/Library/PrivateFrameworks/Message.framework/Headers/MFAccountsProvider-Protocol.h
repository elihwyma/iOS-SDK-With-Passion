/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Swift-Protocol.h>

@class NSArray, NSSet;

@protocol MFAccountsProvider <Swift>

@property (copy, nonatomic, readonly) NSArray *mailAccounts;
@property (copy, nonatomic, readonly) NSArray *orderedAccounts;
@property (copy, nonatomic, readonly) NSSet *displayedAccounts;
@property (copy, nonatomic, readonly) NSSet *autofetchAccounts;
@property (nonatomic, readonly, getter=isDisplayingMultipleAccounts) _Bool displayingMultipleAccounts;

@end
