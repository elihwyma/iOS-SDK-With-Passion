/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@interface AWDDEDFinisherEnded : PBCodable

{
    unsigned long long _duration;
    unsigned long long _numbytes;
    unsigned long long _timestamp;
    int _state;
    int _type;
    struct {
        unsigned int duration:1;
        unsigned int numbytes:1;
        unsigned int timestamp:1;
        unsigned int state:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) _Bool hasNumbytes;
@property (nonatomic) unsigned long long numbytes;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasState;
@property (nonatomic) int state;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (id)stateAsString:(int)arg1;
- (int)StringAsState:(id)arg1;

@end
