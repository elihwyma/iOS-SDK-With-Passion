/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class NSString;

@interface BRFieldCKInfo : PBCodable <Swift>

{
    NSString *_etag;
    NSString *_etagBeforeCrossZoneMove;
    _Bool _knownToServer;
    _Bool _wasCached;
    struct {
        unsigned int knownToServer:1;
        unsigned int wasCached:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool hasKnownToServer;
@property (nonatomic) _Bool knownToServer;
@property (nonatomic) _Bool hasWasCached;
@property (nonatomic) _Bool wasCached;
@property (nonatomic, readonly) _Bool hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (nonatomic, readonly) _Bool hasEtagBeforeCrossZoneMove;
@property (retain, nonatomic) NSString *etagBeforeCrossZoneMove;

+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)initWithRecord:(id)arg1;
- (void)setCKInfoFieldsInRecord:(id)arg1;
- (void)markMovedToCloudDocsZone;

@end
