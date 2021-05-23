/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOProactiveItem : PBCodable

{
    int _proactiveItemType;
    int _timeSinceStart;
    _Bool _deleted;
    _Bool _edited;
    _Bool _shared;
    _Bool _tapped;
    _Bool _visible;
    struct {
        unsigned int has_proactiveItemType:1;
        unsigned int has_timeSinceStart:1;
        unsigned int has_deleted:1;
        unsigned int has_edited:1;
        unsigned int has_shared:1;
        unsigned int has_tapped:1;
        unsigned int has_visible:1;
    } _flags;
}

@property (nonatomic) _Bool hasProactiveItemType;
@property (nonatomic) int proactiveItemType;
@property (nonatomic) _Bool hasTimeSinceStart;
@property (nonatomic) int timeSinceStart;
@property (nonatomic) _Bool hasVisible;
@property (nonatomic) _Bool visible;
@property (nonatomic) _Bool hasTapped;
@property (nonatomic) _Bool tapped;
@property (nonatomic) _Bool hasShared;
@property (nonatomic) _Bool shared;
@property (nonatomic) _Bool hasEdited;
@property (nonatomic) _Bool edited;
@property (nonatomic) _Bool hasDeleted;
@property (nonatomic) _Bool deleted;

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
- (id)proactiveItemTypeAsString:(int)arg1;
- (int)StringAsProactiveItemType:(id)arg1;

@end
