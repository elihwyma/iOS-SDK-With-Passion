/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface _DKPRCompressedChangeSet : PBCodable

{
    unsigned long long _uncompressedLength;
    NSData *_compressedData;
}

@property (nonatomic) unsigned long long uncompressedLength;
@property (retain, nonatomic) NSData *compressedData;

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
