/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKDevice, NSArray, NSString, NSUUID;

@interface _HKFitnessMachine : NSObject <Swift>

{
    NSUUID *_identifier;
    unsigned long long _type;
    unsigned long long _activityType;
    HKDevice *_device;
    NSString *_brand;
    NSArray *_requestedTypes;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) HKDevice *device;
@property (nonatomic, readonly) NSString *brand;
@property (nonatomic, readonly) NSArray *requestedTypes;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2;
- (void)_setActivityType:(unsigned long long)arg1;
- (void)_setDevice:(id)arg1;
- (void)_setBrand:(id)arg1;
- (void)_setRequestedTypes:(id)arg1;

@end
