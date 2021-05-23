/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSString;

@interface INTrainTrip : NSObject <Swift>

{
    NSString *_provider;
    NSString *_trainName;
    NSString *_trainNumber;
    INDateComponentsRange *_tripDuration;
    CLPlacemark *_departureStationLocation;
    NSString *_departurePlatform;
    CLPlacemark *_arrivalStationLocation;
    NSString *_arrivalPlatform;
}

@property (copy, nonatomic, readonly) NSString *provider;
@property (copy, nonatomic, readonly) NSString *trainName;
@property (copy, nonatomic, readonly) NSString *trainNumber;
@property (copy, nonatomic, readonly) INDateComponentsRange *tripDuration;
@property (copy, nonatomic, readonly) CLPlacemark *departureStationLocation;
@property (copy, nonatomic, readonly) NSString *departurePlatform;
@property (copy, nonatomic, readonly) CLPlacemark *arrivalStationLocation;
@property (copy, nonatomic, readonly) NSString *arrivalPlatform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithProvider:(id)arg1 trainName:(id)arg2 trainNumber:(id)arg3 tripDuration:(id)arg4 departureStationLocation:(id)arg5 departurePlatform:(id)arg6 arrivalStationLocation:(id)arg7 arrivalPlatform:(id)arg8;

@end
