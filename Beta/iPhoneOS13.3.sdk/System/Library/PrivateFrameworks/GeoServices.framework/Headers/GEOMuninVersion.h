/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOMuninVersion : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_coverages;
    unsigned int _version;
    CDStruct_a42fff2f _flags;
}

@property (nonatomic) _Bool hasVersion;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSMutableArray *coverages;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)coverageType;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)addCoverage:(id)arg1;
- (unsigned long long)coveragesCount;
- (void)clearCoverages;
- (id)coverageAtIndex:(unsigned long long)arg1;

@end
