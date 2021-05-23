/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString;

@interface GEOCacheMissLoadError : PBCodable

{
    NSString *_errorDomain;
    unsigned int _count;
    int _errorCode;
    struct {
        unsigned int has_count:1;
        unsigned int has_errorCode:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) _Bool hasCount;
@property (nonatomic) unsigned int count;

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

@end
