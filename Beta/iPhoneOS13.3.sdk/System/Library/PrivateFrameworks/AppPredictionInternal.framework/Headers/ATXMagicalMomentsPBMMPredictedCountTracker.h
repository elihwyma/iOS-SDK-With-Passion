/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ATXMagicalMomentsPBMMPredictedCountTracker : PBCodable

{
    NSString *_abGroup;
    int _anchor;
    NSString *_topBundleId;
    CDStruct_c0e14264 _has;
}

@property (nonatomic) _Bool hasAnchor;
@property (nonatomic) int anchor;
@property (nonatomic, readonly) _Bool hasTopBundleId;
@property (retain, nonatomic) NSString *topBundleId;
@property (nonatomic, readonly) _Bool hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)anchorAsString:(int)arg1;
- (int)StringAsAnchor:(id)arg1;

@end
