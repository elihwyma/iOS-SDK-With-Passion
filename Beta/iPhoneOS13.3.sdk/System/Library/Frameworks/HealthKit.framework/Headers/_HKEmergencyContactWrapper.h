/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class _HKEmergencyContact;

__attribute__((visibility("hidden")))
@interface _HKEmergencyContactWrapper : NSObject

{
    _HKEmergencyContact *_contact;
}

@property (retain, nonatomic) _HKEmergencyContact *contact;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
