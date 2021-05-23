/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCPProtoTime : PBCodable <Swift>

{
    long long _epoch;
    long long _value;
    unsigned int _flags;
    int _timescale;
}

@property (nonatomic) long long value;
@property (nonatomic) int timescale;
@property (nonatomic) unsigned int flags;
@property (nonatomic) long long epoch;

+ (id)timeWithCMTime:(CDStruct_1b6d18a9)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (CDStruct_1b6d18a9)timeValue;

@end
