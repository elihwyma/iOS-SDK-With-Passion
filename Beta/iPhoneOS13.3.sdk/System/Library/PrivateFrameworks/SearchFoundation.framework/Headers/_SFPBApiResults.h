/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBApiResults : PBCodable <Swift>

{
    int _status;
    int _resultType;
    NSArray *_flights;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int status;
@property (nonatomic) int resultType;
@property (copy, nonatomic) NSArray *flights;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addFlights:(id)arg1;
- (void)clearFlights;
- (unsigned long long)flightsCount;
- (id)flightsAtIndex:(unsigned long long)arg1;

@end
