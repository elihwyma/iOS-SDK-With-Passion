/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDPictureItemContainer, GEOPDTextItemContainer, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAnnotatedItemList : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDPictureItemContainer *_picItemContainer;
    GEOPDTextItemContainer *_textItemContainer;
    NSString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _annotatedItemStyle;
    struct {
        unsigned int has_annotatedItemStyle:1;
        unsigned int read_unknownFields:1;
        unsigned int read_picItemContainer:1;
        unsigned int read_textItemContainer:1;
        unsigned int read_title:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_picItemContainer:1;
        unsigned int wrote_textItemContainer:1;
        unsigned int wrote_title:1;
        unsigned int wrote_annotatedItemStyle:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasPicItemContainer;
@property (retain, nonatomic) GEOPDPictureItemContainer *picItemContainer;
@property (nonatomic, readonly) _Bool hasTextItemContainer;
@property (retain, nonatomic) GEOPDTextItemContainer *textItemContainer;
@property (nonatomic) _Bool hasAnnotatedItemStyle;
@property (nonatomic) int annotatedItemStyle;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)annotatedItemListForPlaceData:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readTitle;
- (void)_readPicItemContainer;
- (void)_readTextItemContainer;
- (id)annotatedItemStyleAsString:(int)arg1;
- (int)StringAsAnnotatedItemStyle:(id)arg1;

@end
