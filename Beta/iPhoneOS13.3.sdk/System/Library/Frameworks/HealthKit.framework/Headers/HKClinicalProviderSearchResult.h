/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKClinicalBrand, NSString;

@interface HKClinicalProviderSearchResult : NSObject <Swift>

{
    _Bool _supported;
    NSString *_externalID;
    NSString *_batchID;
    NSString *_title;
    NSString *_subtitle;
    NSString *_location;
    HKClinicalBrand *_brand;
}

@property (copy, nonatomic, readonly) NSString *externalID;
@property (copy, nonatomic, readonly) NSString *batchID;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) NSString *location;
@property (copy, nonatomic, readonly) HKClinicalBrand *brand;
@property (nonatomic, readonly, getter=isSupported) _Bool supported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)informationURL;
- (id)initWithExternalID:(id)arg1 batchID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 location:(id)arg5 supported:(_Bool)arg6 brand:(id)arg7;

@end
