/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBSearchForAccountsIntentResponse <Swift>

@property (copy, nonatomic) NSArray *accounts;
@property (nonatomic, readonly) unsigned long long accountsCount;

+ (unsigned short)accountsType;

- (unsigned short)clearAccounts;
- (unsigned short)addAccounts: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsAtIndex: /* Error: Ran out of types for this method. */;

@end
