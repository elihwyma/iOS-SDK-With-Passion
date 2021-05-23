/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ADSegmentUpdateResponse : PBCodable

{
    double _maxSegmentUpdateIntervalInSeconds;
    double _segmentRefreshIntervalInSeconds;
    NSString *_idDebug;
    struct {
        unsigned int maxSegmentUpdateIntervalInSeconds:1;
        unsigned int segmentRefreshIntervalInSeconds:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdDebug;
@property (retain, nonatomic) NSString *idDebug;
@property (nonatomic) _Bool hasSegmentRefreshIntervalInSeconds;
@property (nonatomic) double segmentRefreshIntervalInSeconds;
@property (nonatomic) _Bool hasMaxSegmentUpdateIntervalInSeconds;
@property (nonatomic) double maxSegmentUpdateIntervalInSeconds;

+ (id)options;

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
