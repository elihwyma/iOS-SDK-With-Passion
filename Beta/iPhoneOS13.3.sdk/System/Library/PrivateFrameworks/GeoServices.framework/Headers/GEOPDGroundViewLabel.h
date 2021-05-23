/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGroundViewLabel : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_groundViewLabelInfos;
    unsigned long long _groundViewLocationId;
    struct {
        unsigned int has_groundViewLocationId:1;
    } _flags;
}

@property (nonatomic) _Bool hasGroundViewLocationId;
@property (nonatomic) unsigned long long groundViewLocationId;
@property (retain, nonatomic) NSMutableArray *groundViewLabelInfos;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)groundViewLabelInfoType;

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
- (void)addGroundViewLabelInfo:(id)arg1;
- (unsigned long long)groundViewLabelInfosCount;
- (void)clearGroundViewLabelInfos;
- (id)groundViewLabelInfoAtIndex:(unsigned long long)arg1;

@end
