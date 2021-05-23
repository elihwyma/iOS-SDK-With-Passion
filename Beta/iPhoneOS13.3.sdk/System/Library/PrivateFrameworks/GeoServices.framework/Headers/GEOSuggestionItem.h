/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString;

@interface GEOSuggestionItem : PBCodable

{
    NSString *_suggestionString;
    int _tappingCount;
    _Bool _eventuallyVisible;
    _Bool _initiallyVisible;
    struct {
        unsigned int has_tappingCount:1;
        unsigned int has_eventuallyVisible:1;
        unsigned int has_initiallyVisible:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasSuggestionString;
@property (retain, nonatomic) NSString *suggestionString;
@property (nonatomic) _Bool hasInitiallyVisible;
@property (nonatomic) _Bool initiallyVisible;
@property (nonatomic) _Bool hasEventuallyVisible;
@property (nonatomic) _Bool eventuallyVisible;
@property (nonatomic) _Bool hasTappingCount;
@property (nonatomic) int tappingCount;

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
