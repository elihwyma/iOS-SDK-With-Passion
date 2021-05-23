/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOMapKitCount : PBCodable

{
    unsigned int _appCount;
    int _appType;
    int _countType;
    unsigned int _useCount;
    struct {
        unsigned int has_appCount:1;
        unsigned int has_appType:1;
        unsigned int has_countType:1;
        unsigned int has_useCount:1;
    } _flags;
}

@property (nonatomic) _Bool hasCountType;
@property (nonatomic) int countType;
@property (nonatomic) _Bool hasAppType;
@property (nonatomic) int appType;
@property (nonatomic) _Bool hasUseCount;
@property (nonatomic) unsigned int useCount;
@property (nonatomic) _Bool hasAppCount;
@property (nonatomic) unsigned int appCount;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)countTypeAsString:(int)arg1;
- (int)StringAsCountType:(id)arg1;
- (id)appTypeAsString:(int)arg1;
- (int)StringAsAppType:(id)arg1;

@end
