/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString;

@interface GEOLogMsgEventGenericAppError : PBCodable

{
    long long _appErrorCode;
    NSString *_appErrorDomain;
    struct {
        unsigned int has_appErrorCode:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasAppErrorDomain;
@property (retain, nonatomic) NSString *appErrorDomain;
@property (nonatomic) _Bool hasAppErrorCode;
@property (nonatomic) long long appErrorCode;

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

@end
