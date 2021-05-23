/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface PKInstallmentPlanProduct : NSObject <Swift>

{
    _Bool _upgradeEligible;
    NSString *_identifier;
    NSString *_model;
    NSString *_capacity;
    NSString *_color;
    unsigned long long _warrantyYears;
    NSSet *_features;
    NSString *_serialNumber;
    NSDictionary *_iconURLs;
    NSDictionary *_splashImageURLs;
}

@property (copy, nonatomic) NSDictionary *iconURLs;
@property (copy, nonatomic) NSDictionary *splashImageURLs;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *capacity;
@property (copy, nonatomic) NSString *color;
@property (nonatomic, getter=isUpgradeEligible) _Bool upgradeEligible;
@property (nonatomic) unsigned long long warrantyYears;
@property (copy, nonatomic) NSSet *features;
@property (copy, nonatomic) NSString *serialNumber;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)_imageURLFromImageURLs:(id)arg1 forScale:(double)arg2 suffix:(id)arg3;
- (_Bool)isEqualToInstallmentPlanProduct:(id)arg1;
- (id)iconURLForScale:(double)arg1 suffix:(id)arg2;
- (id)splashImageURLForScale:(double)arg1 suffix:(id)arg2;

@end
