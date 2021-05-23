/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class PKCurrencyAmount;

@interface PKPhysicalCardPriceOption : NSObject <Swift>

{
    unsigned long long _reason;
    PKCurrencyAmount *_amount;
}

@property (nonatomic) unsigned long long reason;
@property (retain, nonatomic) PKCurrencyAmount *amount;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonDictionaryRepresentation;

@end
