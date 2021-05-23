/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PPM2NamedEntitiesScored : PBCodable

{
    NSString *_bundleId;
    unsigned int _resultSizeLog10;
    _Bool _error;
    _Bool _exclusionSpec;
    _Bool _limitHit;
    _Bool _timeLimited;
    _Bool _timeSpec;
    CDStruct_68ee747f _has;
}

@property (nonatomic, readonly) _Bool hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) _Bool hasResultSizeLog10;
@property (nonatomic) unsigned int resultSizeLog10;
@property (nonatomic) _Bool hasLimitHit;
@property (nonatomic) _Bool limitHit;
@property (nonatomic) _Bool hasTimeSpec;
@property (nonatomic) _Bool timeSpec;
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
