/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMBackupPaymentInfo, NSNumber, NSString;

@interface EDAMAccounting : FATObject

{
    NSNumber *_uploadLimit;
    NSNumber *_uploadLimitEnd;
    NSNumber *_uploadLimitNextMonth;
    NSNumber *_premiumServiceStatus;
    NSString *_premiumOrderNumber;
    NSString *_premiumCommerceService;
    NSNumber *_premiumServiceStart;
    NSString *_premiumServiceSKU;
    NSNumber *_lastSuccessfulCharge;
    NSNumber *_lastFailedCharge;
    NSString *_lastFailedChargeReason;
    NSNumber *_nextPaymentDue;
    NSNumber *_premiumLockUntil;
    NSNumber *_updated;
    NSString *_premiumSubscriptionNumber;
    NSNumber *_lastRequestedCharge;
    NSString *_currency;
    NSNumber *_unitPrice;
    NSNumber *_businessId;
    NSString *_businessName;
    NSNumber *_businessRole;
    NSNumber *_unitDiscount;
    NSNumber *_nextChargeDate;
    NSNumber *_availablePoints;
    EDAMBackupPaymentInfo *_backupPaymentInfo;
}

@property (retain, nonatomic) NSNumber *uploadLimit;
@property (retain, nonatomic) NSNumber *uploadLimitEnd;
@property (retain, nonatomic) NSNumber *uploadLimitNextMonth;
@property (retain, nonatomic) NSNumber *premiumServiceStatus;
@property (retain, nonatomic) NSString *premiumOrderNumber;
@property (retain, nonatomic) NSString *premiumCommerceService;
@property (retain, nonatomic) NSNumber *premiumServiceStart;
@property (retain, nonatomic) NSString *premiumServiceSKU;
@property (retain, nonatomic) NSNumber *lastSuccessfulCharge;
@property (retain, nonatomic) NSNumber *lastFailedCharge;
@property (retain, nonatomic) NSString *lastFailedChargeReason;
@property (retain, nonatomic) NSNumber *nextPaymentDue;
@property (retain, nonatomic) NSNumber *premiumLockUntil;
@property (retain, nonatomic) NSNumber *updated;
@property (retain, nonatomic) NSString *premiumSubscriptionNumber;
@property (retain, nonatomic) NSNumber *lastRequestedCharge;
@property (retain, nonatomic) NSString *currency;
@property (retain, nonatomic) NSNumber *unitPrice;
@property (retain, nonatomic) NSNumber *businessId;
@property (retain, nonatomic) NSString *businessName;
@property (retain, nonatomic) NSNumber *businessRole;
@property (retain, nonatomic) NSNumber *unitDiscount;
@property (retain, nonatomic) NSNumber *nextChargeDate;
@property (retain, nonatomic) NSNumber *availablePoints;
@property (retain, nonatomic) EDAMBackupPaymentInfo *backupPaymentInfo;

+ (id)structName;
+ (id)structFields;

@end
