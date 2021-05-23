/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOLogMsgStateTransit : PBCodable

{
    _Bool _transitNotAvailableAdvisoryShowing;
    struct {
        unsigned int has_transitNotAvailableAdvisoryShowing:1;
    } _flags;
}

@property (nonatomic) _Bool hasTransitNotAvailableAdvisoryShowing;
@property (nonatomic) _Bool transitNotAvailableAdvisoryShowing;

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
