/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCPProtoPoint : PBCodable <Swift>

{
    double _x;
    double _y;
}

@property (nonatomic) double x;
@property (nonatomic) double y;

+ (id)pointWithPoint:(struct CGPoint)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGPoint)pointValue;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
