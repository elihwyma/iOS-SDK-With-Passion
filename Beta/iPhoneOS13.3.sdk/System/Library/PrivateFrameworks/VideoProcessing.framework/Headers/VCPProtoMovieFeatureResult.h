/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

@class NSData, VCPProtoTime;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieFeatureResult : PBCodable <Swift>

{
    NSData *_featureBlob;
    VCPProtoTime *_timestamp;
}

@property (retain, nonatomic) VCPProtoTime *timestamp;
@property (retain, nonatomic) NSData *featureBlob;

+ (id)resultFromLegacyDictionary:(id)arg1;

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

@end
