/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PPM2DatabaseRecordCount : PBCodable

{
    unsigned int _schemaVersion;
    NSString *_tableName;
    CDStruct_278ffb8f _has;
}

@property (nonatomic) _Bool hasSchemaVersion;
@property (nonatomic) unsigned int schemaVersion;
@property (nonatomic, readonly) _Bool hasTableName;
@property (retain, nonatomic) NSString *tableName;

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
