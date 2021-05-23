/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface _MRDiagnosticProtobuf : PBCodable

{
    double _dateGenerated;
    NSString *_diagnosticInfo;
    struct {
        unsigned int dateGenerated:1;
    } _has;
}

@property (nonatomic) _Bool hasDateGenerated;
@property (nonatomic) double dateGenerated;
@property (nonatomic, readonly) _Bool hasDiagnosticInfo;
@property (retain, nonatomic) NSString *diagnosticInfo;

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
