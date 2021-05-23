/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NPKProtoCatalog;

@interface NPKProtoCatalogChangedRequest : PBRequest

{
    NPKProtoCatalog *_catalog;
    unsigned int _lastKnownResyncID;
    unsigned int _resyncID;
    unsigned int _syncID;
    CDStruct_02c44088 _has;
}

@property (retain, nonatomic) NPKProtoCatalog *catalog;
@property (nonatomic) _Bool hasResyncID;
@property (nonatomic) unsigned int resyncID;
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
