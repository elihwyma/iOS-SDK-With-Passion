/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class SISchemaClientAnyEvent, SISchemaClientTurnContext;

@interface SISchemaClientTurnBasedEvent : PBCodable

{
    SISchemaClientAnyEvent *_event;
    SISchemaClientTurnContext *_turnContext;
}

@property (nonatomic, readonly) _Bool hasTurnContext;
@property (retain, nonatomic) SISchemaClientTurnContext *turnContext;
@property (nonatomic, readonly) _Bool hasEvent;
@property (retain, nonatomic) SISchemaClientAnyEvent *event;

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
