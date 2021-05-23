/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface ASDIAPInfo : NSObject <Swift>

{
    _Bool _autoRenewStatus;
    _Bool _hasUsedFreeOffer;
    _Bool _hasUsedIntroPricingOffer;
    unsigned char _type;
    NSNumber *_adamId;
    NSNumber *_appAdamId;
    NSDate *_expirationDate;
    NSDate *_lastModifiedDate;
    NSDate *_purchaseDate;
    NSString *_subscriptionFamilyId;
}

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
@property (nonatomic, readonly) NSNumber *expirationTimestamp;
@property (nonatomic, readonly) NSNumber *lastModifiedTimestamp;
@property (nonatomic, readonly) NSNumber *purchaseTimestamp;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToIAPInfo:(id)arg1;
- (id)_newCopyWithClass:(Class)arg1 zone:(struct _NSZone *)arg2;

@end
