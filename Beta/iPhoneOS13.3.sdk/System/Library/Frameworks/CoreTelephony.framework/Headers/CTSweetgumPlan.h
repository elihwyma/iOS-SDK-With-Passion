/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CTSweetgumPlan : NSObject

{
    unsigned char _planSubscriptionStatus;
    _Bool _planPurchasable;
    NSString *_planId;
    NSString *_planLabel;
    NSString *_planValue;
    NSString *_planDetailsURL;
    NSString *_planTermsURL;
    NSString *_planPurchaseURL;
    long long _planType;
}

@property (retain, nonatomic) NSString *planId;
@property (retain, nonatomic) NSString *planLabel;
@property (retain, nonatomic) NSString *planValue;
@property (nonatomic) unsigned char planSubscriptionStatus;
@property (nonatomic) _Bool planPurchasable;
@property (retain, nonatomic) NSString *planDetailsURL;
@property (retain, nonatomic) NSString *planTermsURL;
@property (retain, nonatomic) NSString *planPurchaseURL;
@property (nonatomic) long long planType;
@property (nonatomic, readonly) long long planStatus;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
