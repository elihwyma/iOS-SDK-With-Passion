/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class CLLocation, INImage, NSString;

@protocol INRideVehicleExport <Swift>

@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *registrationPlate;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) INImage *mapAnnotationImage;

- (unsigned short)init;

@end
