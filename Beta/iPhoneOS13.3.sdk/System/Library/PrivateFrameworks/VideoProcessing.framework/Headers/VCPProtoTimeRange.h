/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

@class VCPProtoTime;

__attribute__((visibility("hidden")))
@interface VCPProtoTimeRange : PBCodable <Swift>

{
    VCPProtoTime *_duration;
    VCPProtoTime *_start;
}

@property (retain, nonatomic) VCPProtoTime *start;
@property (retain, nonatomic) VCPProtoTime *duration;

+ (id)timeRangeWithCMTimeRange:(CDStruct_e83c9415)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (CDStruct_e83c9415)timeRangeValue;

@end
