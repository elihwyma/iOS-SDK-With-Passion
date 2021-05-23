/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSData, NSNumber, NSString, SADistance;

@interface SALocation : SADomainObject

@property (copy, nonatomic) NSNumber *accuracy;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSArray *entryPoints;
@property (copy, nonatomic) NSData *forwardGeoData;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *regionType;
@property (retain, nonatomic) SADistance *relativeDistance;
@property (copy, nonatomic) NSString *stateCode;
@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *subAdministrativeArea;
@property (copy, nonatomic) NSString *subLocality;
@property (copy, nonatomic) NSString *subThoroughfare;
@property (copy, nonatomic) NSString *thoroughfare;
@property (copy, nonatomic) NSString *timezoneId;
@property (copy, nonatomic) NSNumber *travelDistance;
@property (copy, nonatomic) NSNumber *travelTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)location;
+ (id)locationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
