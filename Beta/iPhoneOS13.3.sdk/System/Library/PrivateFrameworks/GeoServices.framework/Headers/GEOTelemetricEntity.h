/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString;

@interface GEOTelemetricEntity : PBCodable

{
    NSString *_eventDetail;
    unsigned long long _eventValue;
    int _eventKey;
    struct {
        unsigned int has_eventValue:1;
        unsigned int has_eventKey:1;
    } _flags;
}

@property (nonatomic) _Bool hasEventKey;
@property (nonatomic) int eventKey;
@property (nonatomic) _Bool hasEventValue;
@property (nonatomic) unsigned long long eventValue;
@property (nonatomic, readonly) _Bool hasEventDetail;
@property (retain, nonatomic) NSString *eventDetail;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)eventKeyAsString:(int)arg1;
- (int)StringAsEventKey:(id)arg1;

@end
