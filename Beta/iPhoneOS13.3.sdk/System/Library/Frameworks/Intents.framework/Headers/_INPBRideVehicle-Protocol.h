/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class GEOLocation, NSString, _INPBImageValue;

@protocol _INPBRideVehicle <Swift>

@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic, readonly) _Bool hasLocation;
@property (copy, nonatomic) NSString *manufacturer;
@property (nonatomic, readonly) _Bool hasManufacturer;
@property (retain, nonatomic) _INPBImageValue *mapAnnotationImage;
@property (nonatomic, readonly) _Bool hasMapAnnotationImage;
@property (copy, nonatomic) NSString *model;
@property (nonatomic, readonly) _Bool hasModel;
@property (copy, nonatomic) NSString *registrationPlate;
@property (nonatomic, readonly) _Bool hasRegistrationPlate;

@end
