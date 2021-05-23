/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <ProtocolBuffer/PBCodable.h>

@interface WBSAnalyticsSafariSelectedFavoritesGridItemEvent : PBCodable

{
    unsigned long long _itemsPerRow;
    unsigned long long _row;
    unsigned long long _sectionIndex;
    unsigned long long _timestamp;
    int _displayContext;
    int _section;
    int _type;
    struct {
        unsigned int itemsPerRow:1;
        unsigned int row:1;
        unsigned int sectionIndex:1;
        unsigned int timestamp:1;
        unsigned int displayContext:1;
        unsigned int section:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasRow;
@property (nonatomic) unsigned long long row;
@property (nonatomic) _Bool hasItemsPerRow;
@property (nonatomic) unsigned long long itemsPerRow;
@property (nonatomic) _Bool hasSectionIndex;
@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasDisplayContext;
@property (nonatomic) int displayContext;
@property (nonatomic) _Bool hasSection;
@property (nonatomic) int section;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (id)displayContextAsString:(int)arg1;
- (int)StringAsDisplayContext:(id)arg1;
- (id)sectionAsString:(int)arg1;
- (int)StringAsSection:(id)arg1;

@end
