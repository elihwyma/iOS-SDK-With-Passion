/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

__attribute__((visibility("hidden")))
@interface SYLogEngineState : PBCodable

{
    int _type;
    _Bool _buffersSessions;
    _Bool _inSession;
    _Bool _suspended;
    struct {
        unsigned int buffersSessions:1;
        unsigned int inSession:1;
        unsigned int suspended:1;
    } _has;
}

@property (nonatomic) int type;
@property (nonatomic) _Bool hasSuspended;
@property (nonatomic) _Bool suspended;
@property (nonatomic) _Bool hasInSession;
@property (nonatomic) _Bool inSession;
@property (nonatomic) _Bool hasBuffersSessions;
@property (nonatomic) _Bool buffersSessions;

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

@end
