/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray;

@protocol EDAccountsProvider

@property (copy, nonatomic, readonly) NSArray *receivingAddresses;

- (unsigned short)mailAccounts;

@end
