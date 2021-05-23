/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBBalanceAmountValue, _INPBDataString, _INPBValueMetadata;

@protocol _INPBFinancialAccountValue <Swift>

@property (retain, nonatomic) _INPBDataString *accountNickname;
@property (nonatomic, readonly) _Bool hasAccountNickname;
@property (copy, nonatomic) NSString *accountNumber;
@property (nonatomic, readonly) _Bool hasAccountNumber;
@property (nonatomic) int accountType;
@property (nonatomic) _Bool hasAccountType;
@property (retain, nonatomic) _INPBBalanceAmountValue *balance;
@property (nonatomic, readonly) _Bool hasBalance;
@property (retain, nonatomic) _INPBDataString *organizationName;
@property (nonatomic, readonly) _Bool hasOrganizationName;
@property (retain, nonatomic) _INPBBalanceAmountValue *secondaryBalance;
@property (nonatomic, readonly) _Bool hasSecondaryBalance;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

- (unsigned short)accountTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsAccountType: /* Error: Ran out of types for this method. */;

@end
