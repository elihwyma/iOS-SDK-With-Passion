/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaClientTurnContext : PBCodable

{
    NSData *_turnID;
}

@property (nonatomic, readonly) _Bool hasTurnID;
@property (retain, nonatomic) NSData *turnID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
