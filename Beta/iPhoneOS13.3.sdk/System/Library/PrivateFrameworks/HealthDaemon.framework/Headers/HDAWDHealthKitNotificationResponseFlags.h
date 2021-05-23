/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDAWDHealthKitNotificationResponseFlags : PBCodable <Swift>

{
    _Bool _alreadyDoing;
    _Bool _poorTiming;
    struct {
        unsigned int alreadyDoing:1;
        unsigned int poorTiming:1;
    } _has;
}

@property (nonatomic) _Bool hasPoorTiming;
@property (nonatomic) _Bool poorTiming;
@property (nonatomic) _Bool hasAlreadyDoing;
@property (nonatomic) _Bool alreadyDoing;

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
