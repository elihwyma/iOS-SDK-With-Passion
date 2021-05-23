/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCPProtoBounds : PBCodable <Swift>

{
    double _height;
    double _width;
    double _x0;
    double _y0;
}

@property (nonatomic) double x0;
@property (nonatomic) double y0;
@property (nonatomic) double width;
@property (nonatomic) double height;

+ (id)boundsWithCGRect:(struct CGRect)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)rectValue;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
