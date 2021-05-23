/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSDate, NSNumber, NSString, SALocation;

@interface SALocalSearchVehicleEvent : SADomainObject

@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSNumber *userSetLocation;
@property (copy, nonatomic) NSString *vehicleIdentifier;

+ (id)vehicleEvent;
+ (id)vehicleEventWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
