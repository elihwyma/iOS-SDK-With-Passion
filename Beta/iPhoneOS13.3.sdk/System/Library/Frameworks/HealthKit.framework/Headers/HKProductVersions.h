/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface HKProductVersions : NSObject

+ (id)_infoDictionaryForProductWithName:(id)arg1 error:(out id *)arg2;
+ (id)versionForProductWithName:(id)arg1 error:(out id *)arg2;
+ (CDStruct_f6aba300)semanticVersionForProductWithName:(id)arg1 error:(out id *)arg2;
+ (id)UDIDeviceIdentifierForProductWithName:(id)arg1 error:(out id *)arg2;
+ (id)dateOfManufactureForProductWithName:(id)arg1 error:(out id *)arg2;
+ (id)yearOfReleaseForProductWithName:(id)arg1 error:(out id *)arg2;

@end
