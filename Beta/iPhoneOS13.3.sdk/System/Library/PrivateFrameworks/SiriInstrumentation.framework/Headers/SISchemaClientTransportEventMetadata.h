/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaClientTransportEventMetadata : PBCodable

{
    NSString *_eventTransmittedTimestampRefId;
    long long _eventTransmittedRelativeToBootTimeTimestampNs;
    long long _serverArrivedTimestampNs;
    NSString *_arrivedServerPod;
}

@property (copy, nonatomic) NSString *eventTransmittedTimestampRefId;
@property (nonatomic) long long eventTransmittedRelativeToBootTimeTimestampNs;
@property (nonatomic) long long serverArrivedTimestampNs;
@property (copy, nonatomic) NSString *arrivedServerPod;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
