/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKClinicalBrand, HKClinicalGateway, NSDate, NSString, NSUUID;

@interface HKClinicalAccount : NSObject <Swift>

{
    _Bool _userEnabled;
    _Bool _needsRelogin;
    NSUUID *_identifier;
    long long _state;
    NSDate *_lastFetchDate;
    NSDate *_lastFullFetchDate;
    HKClinicalGateway *_gateway;
}

@property (copy, nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly, getter=isUserEnabled) _Bool userEnabled;
@property (nonatomic, readonly) _Bool needsRelogin;
@property (copy, nonatomic, readonly) NSDate *lastFetchDate;
@property (copy, nonatomic, readonly) NSDate *lastFullFetchDate;
@property (copy, nonatomic, readonly) HKClinicalGateway *gateway;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) HKClinicalBrand *brand;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 state:(long long)arg2 userEnabled:(_Bool)arg3 needsRelogin:(_Bool)arg4 lastFetchDate:(id)arg5 lastFullFetchDate:(id)arg6 gateway:(id)arg7;

@end
