/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData;

@interface SISchemaActiveStatus : PBCodable

{
    _Bool _carPlayActiveWithin24Hours;
    NSArray *_audioDevicesActiveWithin24Hours;
}

@property (copy, nonatomic) NSArray *audioDevicesActiveWithin24Hours;
@property (nonatomic) _Bool carPlayActiveWithin24Hours;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addAudioDevicesActiveWithin24Hours:(id)arg1;
- (void)clearAudioDevicesActiveWithin24Hours;
- (unsigned long long)audioDevicesActiveWithin24HoursCount;
- (id)audioDevicesActiveWithin24HoursAtIndex:(unsigned long long)arg1;

@end
