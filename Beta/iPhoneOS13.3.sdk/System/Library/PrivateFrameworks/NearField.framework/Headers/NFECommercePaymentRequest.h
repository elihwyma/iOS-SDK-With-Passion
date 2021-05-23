/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDecimalNumber, NSString;

@interface NFECommercePaymentRequest : NSObject

{
    unsigned char _merchantCapabilities;
    unsigned int _unpredictableNumber;
    NSString *_appletIdentifier;
    NSData *_merchantData;
    NSString *_currencyCode;
    NSString *_countryCode;
    NSDecimalNumber *_transactionAmount;
    NSDate *_transactionDate;
}

@property (retain, nonatomic) NSString *appletIdentifier;
@property (retain, nonatomic) NSData *merchantData;
@property (retain, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSDecimalNumber *transactionAmount;
@property (retain, nonatomic) NSDate *transactionDate;
@property (nonatomic) unsigned char merchantCapabilities;
@property (nonatomic) unsigned int unpredictableNumber;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
