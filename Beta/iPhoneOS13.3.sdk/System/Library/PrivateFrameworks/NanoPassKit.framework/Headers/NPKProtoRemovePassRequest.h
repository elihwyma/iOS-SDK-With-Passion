/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NPKProtoCatalog, NPKProtoHash, NSString;

@interface NPKProtoRemovePassRequest : PBRequest

{
    NPKProtoCatalog *_catalog;
    unsigned int _lastKnownResyncID;
    NPKProtoHash *_libraryHash;
    NSString *_passID;
    unsigned int _resyncID;
    unsigned int _syncID;
    CDStruct_02c44088 _has;
}

@property (retain, nonatomic) NSString *passID;
@property (nonatomic, readonly) _Bool hasLibraryHash;
@property (retain, nonatomic) NPKProtoHash *libraryHash;
@property (nonatomic) _Bool hasResyncID;
@property (nonatomic) unsigned int resyncID;
@property (nonatomic, readonly) _Bool hasCatalog;
@property (retain, nonatomic) NPKProtoCatalog *catalog;
@property (nonatomic) _Bool hasLastKnownResyncID;
@property (nonatomic) unsigned int lastKnownResyncID;
@property (nonatomic) _Bool hasSyncID;
@property (nonatomic) unsigned int syncID;

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
