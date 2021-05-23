/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaClientAnyEvent : PBCodable

{
    NSData *_eventData;
    int _eventType;
    struct {
        unsigned int eventType:1;
    } _has;
}

@property (nonatomic) _Bool hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic, readonly) _Bool hasEventData;
@property (retain, nonatomic) NSData *eventData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)si_dictionaryRepresentation;

@end
