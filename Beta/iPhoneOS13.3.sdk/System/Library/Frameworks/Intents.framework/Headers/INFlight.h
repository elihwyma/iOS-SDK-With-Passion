/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INAirline, INAirportGate, INDateComponentsRange, NSString;

@interface INFlight : NSObject <Swift>

{
    INAirline *_airline;
    NSString *_flightNumber;
    INDateComponentsRange *_boardingTime;
    INDateComponentsRange *_flightDuration;
    INAirportGate *_departureAirportGate;
    INAirportGate *_arrivalAirportGate;
}

@property (copy, nonatomic, readonly) INAirline *airline;
@property (copy, nonatomic, readonly) NSString *flightNumber;
@property (copy, nonatomic, readonly) INDateComponentsRange *boardingTime;
@property (copy, nonatomic, readonly) INDateComponentsRange *flightDuration;
@property (copy, nonatomic, readonly) INAirportGate *departureAirportGate;
@property (copy, nonatomic, readonly) INAirportGate *arrivalAirportGate;
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
- (id)initWithAirline:(id)arg1 flightNumber:(id)arg2 boardingTime:(id)arg3 flightDuration:(id)arg4 departureAirportGate:(id)arg5 arrivalAirportGate:(id)arg6;

@end
