/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaLocation : PBCodable

{
    float _latitude;
    float _longitude;
    float _horizontalAccuracyInMeters;
}

@property (nonatomic) float latitude;
@property (nonatomic) float longitude;
@property (nonatomic) float horizontalAccuracyInMeters;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
