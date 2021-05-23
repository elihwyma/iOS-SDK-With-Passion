/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, SISchemaLocation;

@interface SISchemaDeviceDynamicContext : PBCodable

{
    SISchemaLocation *_location;
    NSString *_countryCode;
    double _timeIntervalSince1970;
}

@property (retain, nonatomic) SISchemaLocation *location;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) double timeIntervalSince1970;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
