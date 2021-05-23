/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NTPBTocExposure : PBCodable

{
    int _precedingLocation;
    NSData *_tocExposureId;
    struct {
        unsigned int precedingLocation:1;
    } _has;
}

@property (nonatomic) _Bool hasPrecedingLocation;
@property (nonatomic) int precedingLocation;
@property (nonatomic, readonly) _Bool hasTocExposureId;
@property (retain, nonatomic) NSData *tocExposureId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)precedingLocationAsString:(int)arg1;
- (int)StringAsPrecedingLocation:(id)arg1;

@end
