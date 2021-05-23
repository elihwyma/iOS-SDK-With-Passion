/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaAnyEvent : PBCodable

{
    int _anyEventType;
    NSData *_payload;
}

@property (nonatomic) int anyEventType;
@property (copy, nonatomic) NSData *payload;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
