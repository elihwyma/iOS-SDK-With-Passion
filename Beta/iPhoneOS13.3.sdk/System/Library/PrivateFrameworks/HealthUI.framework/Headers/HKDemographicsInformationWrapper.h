/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKBiologicalSexObject, HKBloodTypeObject, HKFitzpatrickSkinTypeObject, HKQuantity, HKWheelchairUseObject, NSArray, NSDateComponents, NSString;

@interface HKDemographicsInformationWrapper : NSObject

{
    NSString *_firstName;
    NSString *_middleName;
    NSString *_lastName;
    NSDateComponents *_dateOfBirthComponents;
    HKBiologicalSexObject *_biologicalSexObject;
    HKQuantity *_heightQuantity;
    HKQuantity *_weightQuantity;
    HKFitzpatrickSkinTypeObject *_fitzpatrickSkinTypeObject;
    HKBloodTypeObject *_bloodTypeObject;
    HKWheelchairUseObject *_wheelchairUseObject;
    NSArray *_postalAddresses;
    NSArray *_emailAddresses;
}

@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSDateComponents *dateOfBirthComponents;
@property (copy, nonatomic) HKBiologicalSexObject *biologicalSexObject;
@property (copy, nonatomic) HKQuantity *heightQuantity;
@property (copy, nonatomic) HKQuantity *weightQuantity;
@property (copy, nonatomic) HKFitzpatrickSkinTypeObject *fitzpatrickSkinTypeObject;
@property (copy, nonatomic) HKBloodTypeObject *bloodTypeObject;
@property (copy, nonatomic) HKWheelchairUseObject *wheelchairUseObject;
@property (copy, nonatomic) NSArray *postalAddresses;
@property (copy, nonatomic) NSArray *emailAddresses;

@end
