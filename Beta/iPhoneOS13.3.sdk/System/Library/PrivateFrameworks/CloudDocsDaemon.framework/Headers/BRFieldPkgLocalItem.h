/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class BRFieldPkgItem, NSData;

@interface BRFieldPkgLocalItem : PBCodable <Swift>

{
    long long _fileID;
    long long _size;
    unsigned int _generationID;
    BRFieldPkgItem *_item;
    NSData *_xattrs;
    struct {
        unsigned int size:1;
        unsigned int generationID:1;
    } _has;
}

@property (retain, nonatomic) BRFieldPkgItem *item;
@property (nonatomic) long long fileID;
@property (nonatomic) _Bool hasGenerationID;
@property (nonatomic) unsigned int generationID;
@property (nonatomic) _Bool hasSize;
@property (nonatomic) long long size;
@property (nonatomic, readonly) _Bool hasXattrs;
@property (retain, nonatomic) NSData *xattrs;

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
