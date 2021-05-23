/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

@class NSMutableArray, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieMovingObjectResult : PBCodable <Swift>

{
    NSMutableArray *_bounds;
    VCPProtoTimeRange *_timeRange;
}

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (retain, nonatomic) NSMutableArray *bounds;

+ (id)resultFromLegacyDictionary:(id)arg1;
+ (Class)boundsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)exportToLegacyDictionary;
- (void)addBounds:(id)arg1;
- (unsigned long long)boundsCount;
- (void)clearBounds;
- (id)boundsAtIndex:(unsigned long long)arg1;

@end
