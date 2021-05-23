/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@interface AWDDEDBugSessionEnded : PBCodable

{
    unsigned long long _timestamp;
    int _sessionState;
    struct {
        unsigned int timestamp:1;
        unsigned int sessionState:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasSessionState;
@property (nonatomic) int sessionState;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sessionStateAsString:(int)arg1;
- (int)StringAsSessionState:(id)arg1;

@end
