/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaClientEventMetadata : PBCodable

{
    NSData *_turnID;
    NSData *_siriDeviceID;
    NSString *_eventGeneratedTimestampRefId;
    long long _eventGeneratedRelativeToBootTimeTimestampNs;
}

@property (copy, nonatomic) NSData *turnID;
@property (copy, nonatomic) NSData *siriDeviceID;
@property (copy, nonatomic) NSString *eventGeneratedTimestampRefId;
@property (nonatomic) long long eventGeneratedRelativeToBootTimeTimestampNs;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
