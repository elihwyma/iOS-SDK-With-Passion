/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@interface PHMemoryFeature : NSObject

{
    id _subtypeSpecificAttribute;
    unsigned long long _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (_Bool)supportsSecureCoding;
+ (id)stringForType:(unsigned long long)arg1;
+ (id)personUniversalIdentifierForPersonLocalIdentifier:(id)arg1 photoLibrary:(id)arg2;
+ (id)personLocalIdentifierForPersonUniversalIdentifier:(id)arg1 photoLibrary:(id)arg2;
+ (id)peopleMemoryFeatureWithPersonLocalIdentifier:(id)arg1;
+ (id)timeMemoryFeatureWithDate:(id)arg1;
+ (id)timeMemoryFeatureWithHolidayForName:(id)arg1;
+ (id)locationMemoryFeatureWithLocation:(id)arg1;
+ (id)locationMemoryFeatureWithAreaForName:(id)arg1;
+ (id)memoryFeatureWithData:(id)arg1 photoLibrary:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)date;
- (id)location;
- (id)personLocalIdentifier;
- (id)encodedDataWithPhotoLibrary:(id)arg1;
- (id)holidayName;
- (id)areaName;
- (_Bool)collidesWithFeature:(id)arg1;
- (_Bool)collidesWithDate:(id)arg1;
- (_Bool)collidesWithHolidayWithName:(id)arg1;
- (_Bool)collidesWithLocationAtCoordinates:(struct CLLocationCoordinate2D)arg1;
- (_Bool)collidesWithAreaWithName:(id)arg1;
- (_Bool)collidesWithPersonWithLocalIdentifier:(id)arg1;

@end
