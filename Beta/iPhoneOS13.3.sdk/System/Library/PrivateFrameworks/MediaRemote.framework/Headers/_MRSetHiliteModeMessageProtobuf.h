/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@interface _MRSetHiliteModeMessageProtobuf : PBCodable

{
    _Bool _hiliteMode;
    struct {
        unsigned int hiliteMode:1;
    } _has;
}

@property (nonatomic) _Bool hasHiliteMode;
@property (nonatomic) _Bool hiliteMode;

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
