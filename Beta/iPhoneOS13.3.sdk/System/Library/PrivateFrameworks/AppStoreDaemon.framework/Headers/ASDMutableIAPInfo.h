/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDIAPInfo.h>

@class NSDate, NSNumber, NSString;

@interface ASDMutableIAPInfo : ASDIAPInfo

@property (retain, nonatomic) NSNumber *adamId;
@property (retain, nonatomic) NSNumber *appAdamId;
@property (nonatomic) _Bool autoRenewStatus;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSDate *purchaseDate;
@property (nonatomic) unsigned char type;
@property (nonatomic) _Bool hasUsedFreeOffer;
@property (nonatomic) _Bool hasUsedIntroPricingOffer;
@property (retain, nonatomic) NSString *subscriptionFamilyId;
@property (retain, nonatomic) NSNumber *expirationTimestamp;
@property (retain, nonatomic) NSNumber *lastModifiedTimestamp;
@property (retain, nonatomic) NSNumber *purchaseTimestamp;

@end
