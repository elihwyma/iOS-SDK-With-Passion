/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface _DKPREventData : PBCodable

{
    unsigned long long _uncompressedLength;
    NSData *_event;
    unsigned int _version;
    struct {
        unsigned int uncompressedLength:1;
    } _has;
}

@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSData *event;
@property (nonatomic) _Bool hasUncompressedLength;
@property (nonatomic) unsigned long long uncompressedLength;

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
