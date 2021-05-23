/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKClinicalBrand, NSArray, NSString, NSURL;

@interface HKClinicalProvider : NSObject <Swift>

{
    NSString *_externalID;
    NSString *_title;
    NSString *_subtitle;
    NSString *_location;
    NSURL *_informationURL;
    HKClinicalBrand *_brand;
    NSArray *_gateways;
}

@property (copy, nonatomic, readonly) NSString *externalID;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) NSString *location;
@property (copy, nonatomic, readonly) NSURL *informationURL;
@property (copy, nonatomic, readonly) HKClinicalBrand *brand;
@property (copy, nonatomic, readonly) NSArray *gateways;
@property (nonatomic, readonly, getter=isSupported) _Bool supported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 location:(id)arg4 informationURL:(id)arg5 brand:(id)arg6 gateways:(id)arg7;

@end
