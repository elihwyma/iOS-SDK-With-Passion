/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMBackupPaymentInfo : FATObject

{
    NSString *_premiumCommerceService;
    NSString *_premiumServiceSKU;
    NSString *_currency;
    NSNumber *_unitPrice;
    NSNumber *_paymentMethodId;
}

@property (retain, nonatomic) NSString *premiumCommerceService;
@property (retain, nonatomic) NSString *premiumServiceSKU;
@property (retain, nonatomic) NSString *currency;
@property (retain, nonatomic) NSNumber *unitPrice;
@property (retain, nonatomic) NSNumber *paymentMethodId;

+ (id)structName;
+ (id)structFields;

@end
