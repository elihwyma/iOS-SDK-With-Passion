/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ATXUserMetricsPBExperiment : PBCodable

{
    NSString *_abGroup;
    NSString *_experimentName;
}

@property (nonatomic, readonly) _Bool hasExperimentName;
@property (retain, nonatomic) NSString *experimentName;
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

@end
