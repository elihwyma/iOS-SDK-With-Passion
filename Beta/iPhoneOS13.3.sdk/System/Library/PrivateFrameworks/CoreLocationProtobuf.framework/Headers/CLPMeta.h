/*
 Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

#import <PBCodable.h>

@class NSString;

@interface CLPMeta : PBCodable

{
    long long _submissionId;
    NSString *_probeId;
    NSString *_productId;
    NSString *_softwareVersion;
    struct {
        unsigned int submissionId:1;
    } _has;
}

@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *softwareVersion;
@property (nonatomic) _Bool hasSubmissionId;
@property (nonatomic) long long submissionId;
@property (nonatomic, readonly) _Bool hasProbeId;
@property (retain, nonatomic) NSString *probeId;

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
