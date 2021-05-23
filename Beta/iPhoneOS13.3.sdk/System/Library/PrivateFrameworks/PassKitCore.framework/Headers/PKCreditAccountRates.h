/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDecimalNumber;

@interface PKCreditAccountRates : NSObject <Swift>

{
    NSDecimalNumber *_aprForPurchases;
}

@property (copy, nonatomic) NSDecimalNumber *aprForPurchases;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (id)jsonString;
- (id)formattedAPRForPurchasesPercentageString;

@end
