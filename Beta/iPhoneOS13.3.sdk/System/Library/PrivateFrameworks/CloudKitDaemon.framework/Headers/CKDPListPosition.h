/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface CKDPListPosition : PBCodable

{
    int _index;
    _Bool _isReversed;
    struct {
        unsigned int index:1;
        unsigned int isReversed:1;
    } _has;
}

@property (nonatomic) _Bool hasIndex;
@property (nonatomic) int index;
@property (nonatomic) _Bool hasIsReversed;
@property (nonatomic) _Bool isReversed;

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
