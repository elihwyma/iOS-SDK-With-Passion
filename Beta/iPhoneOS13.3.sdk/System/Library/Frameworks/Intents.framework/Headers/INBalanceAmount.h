/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSDecimalNumber, NSString;

@interface INBalanceAmount : NSObject <Swift>

{
    NSDecimalNumber *_amount;
    long long _balanceType;
    NSString *_currencyCode;
}

@property (copy, nonatomic, readonly) NSDecimalNumber *amount;
@property (nonatomic, readonly) long long balanceType;
@property (copy, nonatomic, readonly) NSString *currencyCode;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)initWithAmount:(id)arg1 currencyCode:(id)arg2;
- (id)initWithAmount:(id)arg1 balanceType:(long long)arg2;
- (id)initWithAmount:(id)arg1 balanceType:(long long)arg2 currencyCode:(id)arg3;

@end
