/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteEntryQuery : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSString *_completion;
    int _tapBehavior;
    _Bool _showIntermediateStateTapBehaviorListView;
    struct {
        unsigned int has_tapBehavior:1;
        unsigned int has_showIntermediateStateTapBehaviorListView:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasCompletion;
@property (retain, nonatomic) NSString *completion;
@property (nonatomic) _Bool hasTapBehavior;
@property (nonatomic) int tapBehavior;
@property (nonatomic) _Bool hasShowIntermediateStateTapBehaviorListView;
@property (nonatomic) _Bool showIntermediateStateTapBehaviorListView;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (id)tapBehaviorAsString:(int)arg1;
- (int)StringAsTapBehavior:(id)arg1;

@end
