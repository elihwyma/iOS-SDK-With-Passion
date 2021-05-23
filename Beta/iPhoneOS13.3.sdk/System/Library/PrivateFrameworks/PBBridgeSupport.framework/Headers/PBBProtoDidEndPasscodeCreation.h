/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface PBBProtoDidEndPasscodeCreation : PBCodable

{
    _Bool _isLong;
    _Bool _success;
    struct {
        unsigned int isLong:1;
    } _has;
}

@property (nonatomic) _Bool success;
@property (nonatomic) _Bool hasIsLong;
@property (nonatomic) _Bool isLong;

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
