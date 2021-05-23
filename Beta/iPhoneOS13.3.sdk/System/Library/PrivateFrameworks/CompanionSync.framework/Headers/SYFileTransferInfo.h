/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class NSString, SYMessageHeader;

@interface SYFileTransferInfo : PBCodable

{
    unsigned long long _decompressedFileSize;
    NSString *_endAnchor;
    SYMessageHeader *_header;
    NSString *_startAnchor;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (nonatomic, readonly) _Bool hasStartAnchor;
@property (retain, nonatomic) NSString *startAnchor;
@property (nonatomic, readonly) _Bool hasEndAnchor;
@property (retain, nonatomic) NSString *endAnchor;
@property (nonatomic) unsigned long long decompressedFileSize;

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
