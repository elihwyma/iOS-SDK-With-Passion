/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NTPBDate;

@interface NTPBRecordBase : PBCodable

{
    NTPBDate *_assetURLsDate;
    int _cacheLifetimeHint;
    NSString *_changeTag;
    NTPBDate *_fetchDate;
    NSString *_identifier;
    NTPBDate *_modificationDate;
    int _recordType;
    _Bool _deletedFromCloud;
    struct {
        unsigned int cacheLifetimeHint:1;
        unsigned int recordType:1;
        unsigned int deletedFromCloud:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasChangeTag;
@property (retain, nonatomic) NSString *changeTag;
@property (nonatomic, readonly) _Bool hasModificationDate;
@property (retain, nonatomic) NTPBDate *modificationDate;
@property (nonatomic, readonly) _Bool hasFetchDate;
@property (retain, nonatomic) NTPBDate *fetchDate;
@property (nonatomic) _Bool hasDeletedFromCloud;
@property (nonatomic) _Bool deletedFromCloud;
@property (nonatomic) _Bool hasCacheLifetimeHint;
@property (nonatomic) int cacheLifetimeHint;
@property (nonatomic) _Bool hasRecordType;
@property (nonatomic) int recordType;
@property (nonatomic, readonly) _Bool hasAssetURLsDate;
@property (retain, nonatomic) NTPBDate *assetURLsDate;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
