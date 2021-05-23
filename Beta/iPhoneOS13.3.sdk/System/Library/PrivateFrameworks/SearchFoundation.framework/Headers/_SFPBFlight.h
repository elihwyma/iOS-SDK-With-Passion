/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBFlight : PBCodable <Swift>

{
    NSString *_flightID;
    NSString *_carrierCode;
    NSString *_carrierName;
    NSString *_flightNumber;
    NSArray *_legs;
    NSString *_operatorCarrierCode;
    NSString *_operatorFlightNumber;
    NSString *_carrierPhoneNumber;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *flightID;
@property (copy, nonatomic) NSString *carrierCode;
@property (copy, nonatomic) NSString *carrierName;
@property (copy, nonatomic) NSString *flightNumber;
@property (copy, nonatomic) NSArray *legs;
@property (copy, nonatomic) NSString *operatorCarrierCode;
@property (copy, nonatomic) NSString *operatorFlightNumber;
@property (copy, nonatomic) NSString *carrierPhoneNumber;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)legsCount;
- (void)clearLegs;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addLegs:(id)arg1;
- (id)legsAtIndex:(unsigned long long)arg1;

@end
