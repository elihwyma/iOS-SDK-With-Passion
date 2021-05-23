/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface CFBSBatteryStatus : SADomainObject

@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSNumber *batteryPercent;
@property (copy, nonatomic) NSNumber *batteryCharging;
@property (copy, nonatomic) NSNumber *lowBattery;

+ (id)object;
+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
