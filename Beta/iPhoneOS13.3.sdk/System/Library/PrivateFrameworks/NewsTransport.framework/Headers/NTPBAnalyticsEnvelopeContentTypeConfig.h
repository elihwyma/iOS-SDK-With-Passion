/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBAnalyticsEnvelopeContentTypeConfig : PBCodable

{
    unsigned long long _groupingTag;
    unsigned long long _seedTime;
    NSString *_contentHeaderName;
    NSString *_contentHeaderValue;
    NSString *_endpointURLString;
    unsigned int _samplingCeiling;
    unsigned int _samplingFloor;
    struct {
        unsigned int groupingTag:1;
        unsigned int seedTime:1;
        unsigned int samplingCeiling:1;
        unsigned int samplingFloor:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasEndpointURLString;
@property (retain, nonatomic) NSString *endpointURLString;
@property (nonatomic) _Bool hasSeedTime;
@property (nonatomic) unsigned long long seedTime;
@property (nonatomic, readonly) _Bool hasContentHeaderName;
@property (retain, nonatomic) NSString *contentHeaderName;
@property (nonatomic, readonly) _Bool hasContentHeaderValue;
@property (retain, nonatomic) NSString *contentHeaderValue;
@property (nonatomic) _Bool hasSamplingFloor;
@property (nonatomic) unsigned int samplingFloor;
@property (nonatomic) _Bool hasSamplingCeiling;
@property (nonatomic) unsigned int samplingCeiling;
@property (nonatomic) _Bool hasGroupingTag;
@property (nonatomic) unsigned long long groupingTag;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
