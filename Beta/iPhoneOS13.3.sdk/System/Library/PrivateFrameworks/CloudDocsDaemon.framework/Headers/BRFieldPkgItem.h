/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class NSData, NSString;

@interface BRFieldPkgItem : PBCodable <Swift>

{
    long long _mtime;
    long long _xattrIndex;
    NSString *_path;
    NSData *_quarantineInfo;
    NSData *_signature;
    NSString *_symlinkContent;
    int _type;
    _Bool _isExecutable;
    _Bool _isWritable;
    struct {
        unsigned int mtime:1;
        unsigned int xattrIndex:1;
        unsigned int isExecutable:1;
        unsigned int isWritable:1;
    } _has;
}

@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasPath;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) _Bool hasMtime;
@property (nonatomic) long long mtime;
@property (nonatomic) _Bool hasIsWritable;
@property (nonatomic) _Bool isWritable;
@property (nonatomic) _Bool hasIsExecutable;
@property (nonatomic) _Bool isExecutable;
@property (nonatomic, readonly) _Bool hasSymlinkContent;
@property (retain, nonatomic) NSString *symlinkContent;
@property (nonatomic, readonly) _Bool hasQuarantineInfo;
@property (retain, nonatomic) NSData *quarantineInfo;
@property (nonatomic, readonly) _Bool hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) _Bool hasXattrIndex;
@property (nonatomic) long long xattrIndex;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)updateWithPkgItem:(id)arg1;
- (id)initWithPkgItem:(id)arg1;

@end
