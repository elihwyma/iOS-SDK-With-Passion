/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDate, NSNumber, NSPersonNameComponents, NSString, PKCurrencyAmount, PKLocation;

@interface PKPassSemantic : NSObject <Swift>

{
    NSString *_semanticKey;
    NSString *_fieldKey;
    NSString *_stringValue;
    NSDate *_dateValue;
    NSNumber *_numberValue;
    PKLocation *_locationValue;
    PKCurrencyAmount *_currencyAmountValue;
    NSPersonNameComponents *_personNameComponentsValue;
    NSArray *_stringsValue;
    NSArray *_dictionariesValue;
}

@property (copy, nonatomic) NSString *semanticKey;
@property (copy, nonatomic) NSString *fieldKey;
@property (copy, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSDate *dateValue;
@property (retain, nonatomic) NSNumber *numberValue;
@property (retain, nonatomic) PKLocation *locationValue;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmountValue;
@property (retain, nonatomic) NSPersonNameComponents *personNameComponentsValue;
@property (retain, nonatomic) NSArray *stringsValue;
@property (retain, nonatomic) NSArray *dictionariesValue;
@property (nonatomic, readonly) _Bool hasValue;

+ (_Bool)supportsSecureCoding;
+ (id)_supportedDictionaryValueTypes;
+ (_Bool)isSupportedDictionaryValueType:(id)arg1;
+ (_Bool)isSupportedDictionaryKeyType:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
