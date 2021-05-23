/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDataString, _INPBIntentMetadata;

@protocol _INPBSearchForAccountsIntent <Swift>

@property (retain, nonatomic) _INPBDataString *accountNickname;
@property (nonatomic, readonly) _Bool hasAccountNickname;
@property (nonatomic) int accountType;
@property (nonatomic) _Bool hasAccountType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBDataString *organizationName;
@property (nonatomic, readonly) _Bool hasOrganizationName;
@property (nonatomic) int requestedBalanceType;
@property (nonatomic) _Bool hasRequestedBalanceType;

- (unsigned short)accountTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsAccountType: /* Error: Ran out of types for this method. */;
- (unsigned short)requestedBalanceTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsRequestedBalanceType: /* Error: Ran out of types for this method. */;

@end
