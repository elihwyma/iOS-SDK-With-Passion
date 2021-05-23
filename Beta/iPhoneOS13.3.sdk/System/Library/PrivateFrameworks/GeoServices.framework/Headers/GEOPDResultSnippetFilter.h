/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultSnippetFilter : PBCodable

{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _supportedChildActions;
    int _maxChildItems;
    int _maxChildPlaces;
    _Bool _supportChildItems;
    struct {
        unsigned int has_maxChildItems:1;
        unsigned int has_maxChildPlaces:1;
        unsigned int has_supportChildItems:1;
    } _flags;
}

@property (nonatomic) _Bool hasMaxChildPlaces;
@property (nonatomic) int maxChildPlaces;
@property (nonatomic) _Bool hasSupportChildItems;
@property (nonatomic) _Bool supportChildItems;
@property (nonatomic) _Bool hasMaxChildItems;
@property (nonatomic) int maxChildItems;
@property (nonatomic, readonly) unsigned long long supportedChildActionsCount;
@property (nonatomic, readonly) int *supportedChildActions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (void)dealloc;
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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)clearSupportedChildActions;
- (int)supportedChildActionAtIndex:(unsigned long long)arg1;
- (void)addSupportedChildAction:(int)arg1;
- (void)setSupportedChildActions:(int *)arg1 count:(unsigned long long)arg2;
- (id)supportedChildActionsAsString:(int)arg1;
- (int)StringAsSupportedChildActions:(id)arg1;

@end
