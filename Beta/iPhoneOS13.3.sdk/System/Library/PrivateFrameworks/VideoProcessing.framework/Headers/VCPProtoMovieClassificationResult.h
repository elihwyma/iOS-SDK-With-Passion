/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

@class NSMutableArray, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieClassificationResult : PBCodable <Swift>

{
    NSMutableArray *_classifications;
    VCPProtoTimeRange *_timeRange;
}

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (retain, nonatomic) NSMutableArray *classifications;

+ (id)resultFromLegacyDictionary:(id)arg1;
+ (Class)classificationType;

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
- (void)addClassification:(id)arg1;
- (unsigned long long)classificationsCount;
- (void)clearClassifications;
- (id)classificationAtIndex:(unsigned long long)arg1;

@end
