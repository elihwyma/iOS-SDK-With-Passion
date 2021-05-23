/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMUser, NSNumber, NSString;

@interface EDAMNoncancelableSubscription : FATObject

{
    NSNumber *_subscriptionId;
    EDAMUser *_user;
    NSNumber *_premiumServiceStatus;
    NSString *_premiumCommerceService;
    NSString *_itunesReceiptData;
    NSString *_amazonUserId;
    NSString *_amazonPurchaseToken;
    NSString *_premiumServiceSku;
    NSNumber *_nextPaymentDue;
    NSNumber *_premiumLockUntil;
    NSString *_currency;
    NSNumber *_unitPrice;
    NSString *_itunesOriginalTransactionId;
}

@property (retain, nonatomic) NSNumber *subscriptionId;
@property (retain, nonatomic) EDAMUser *user;
@property (retain, nonatomic) NSNumber *premiumServiceStatus;
@property (retain, nonatomic) NSString *premiumCommerceService;
@property (retain, nonatomic) NSString *itunesReceiptData;
@property (retain, nonatomic) NSString *amazonUserId;
@property (retain, nonatomic) NSString *amazonPurchaseToken;
@property (retain, nonatomic) NSString *premiumServiceSku;
@property (retain, nonatomic) NSNumber *nextPaymentDue;
@property (retain, nonatomic) NSNumber *premiumLockUntil;
@property (retain, nonatomic) NSString *currency;
@property (retain, nonatomic) NSNumber *unitPrice;
@property (retain, nonatomic) NSString *itunesOriginalTransactionId;

+ (id)structName;
+ (id)structFields;

@end
