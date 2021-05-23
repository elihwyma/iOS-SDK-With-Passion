/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PPM2TopicsScoredForMapping : PBCodable

{
    NSString *_bundleId;
    NSString *_mappingId;
    unsigned int _resultSizeLog10;
    _Bool _error;
    _Bool _exclusionSpec;
    _Bool _timeLimited;
    struct {
        unsigned int resultSizeLog10:1;
        unsigned int error:1;
        unsigned int exclusionSpec:1;
        unsigned int timeLimited:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic, readonly) _Bool hasMappingId;
@property (retain, nonatomic) NSString *mappingId;
@property (nonatomic) _Bool hasResultSizeLog10;
@property (nonatomic) unsigned int resultSizeLog10;
@property (nonatomic) _Bool hasTimeLimited;
@property (nonatomic) _Bool timeLimited;
@property (nonatomic) _Bool hasExclusionSpec;
@property (nonatomic) _Bool exclusionSpec;
@property (nonatomic) _Bool hasError;
@property (nonatomic) _Bool error;

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
