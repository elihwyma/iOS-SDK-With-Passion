/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class CLLocation, INImage, NSString;

@interface INRideVehicle : NSObject <Swift>

{
    CLLocation *_location;
    NSString *_registrationPlate;
    NSString *_manufacturer;
    NSString *_model;
    INImage *_mapAnnotationImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *registrationPlate;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) INImage *mapAnnotationImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;

@end
