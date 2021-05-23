/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PPPBMusicDataCollectionRecord : PBCodable

{
    double _quantizedScore;
    double _secondsFromUnixEpoch;
    int _algorithm;
    NSString *_label;
    NSString *_mediaId;
    int _mediaType;
    NSString *_sourceBundleId;
    int _type;
    struct {
        unsigned int quantizedScore:1;
        unsigned int secondsFromUnixEpoch:1;
        unsigned int algorithm:1;
        unsigned int mediaType:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) _Bool hasSecondsFromUnixEpoch;
@property (nonatomic) double secondsFromUnixEpoch;
@property (nonatomic) _Bool hasQuantizedScore;
@property (nonatomic) double quantizedScore;
@property (nonatomic, readonly) _Bool hasSourceBundleId;
@property (retain, nonatomic) NSString *sourceBundleId;
@property (nonatomic, readonly) _Bool hasMediaId;
@property (retain, nonatomic) NSString *mediaId;
@property (nonatomic) _Bool hasMediaType;
@property (nonatomic) int mediaType;
@property (nonatomic) _Bool hasAlgorithm;
@property (nonatomic) int algorithm;

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
