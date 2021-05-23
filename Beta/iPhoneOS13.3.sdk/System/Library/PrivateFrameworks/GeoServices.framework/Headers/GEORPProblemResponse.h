/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString;

@interface GEORPProblemResponse : PBCodable

{
    NSString *_problemId;
    int _statusCode;
    _Bool _isNotificationSupported;
    struct {
        unsigned int has_statusCode:1;
        unsigned int has_isNotificationSupported:1;
    } _flags;
}

@property (nonatomic) _Bool hasStatusCode;
@property (nonatomic) int statusCode;
@property (nonatomic, readonly) _Bool hasProblemId;
@property (retain, nonatomic) NSString *problemId;
@property (nonatomic) _Bool hasIsNotificationSupported;
@property (nonatomic) _Bool isNotificationSupported;

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
- (id)statusCodeAsString:(int)arg1;
- (int)StringAsStatusCode:(id)arg1;

@end
