/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKInstallmentPlanMerchant : NSObject <Swift>

{
    NSString *_identifier;
    NSString *_name;
    unsigned long long _categoryCode;
    NSString *_city;
    NSString *_state;
    NSString *_postalCode;
    NSString *_country;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long categoryCode;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *country;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToInstallmentPlanMerchant:(id)arg1;

@end
