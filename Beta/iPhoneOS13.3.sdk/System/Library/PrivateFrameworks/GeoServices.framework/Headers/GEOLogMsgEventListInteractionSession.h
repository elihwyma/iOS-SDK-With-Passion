/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOLogMsgEventListInteractionSession : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_listResultItems;
    NSString *_searchString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _listType;
    struct {
        unsigned int has_listType:1;
        unsigned int read_listResultItems:1;
        unsigned int read_searchString:1;
        unsigned int wrote_listResultItems:1;
        unsigned int wrote_searchString:1;
        unsigned int wrote_listType:1;
    } _flags;
}

@property (nonatomic) _Bool hasListType;
@property (nonatomic) int listType;
@property (retain, nonatomic) NSMutableArray *listResultItems;
@property (nonatomic, readonly) _Bool hasSearchString;
@property (retain, nonatomic) NSString *searchString;

+ (_Bool)isValid:(id)arg1;
+ (Class)listResultItemType;

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
- (void)_readSearchString;
- (id)listTypeAsString:(int)arg1;
- (int)StringAsListType:(id)arg1;
- (void)_readListResultItems;
- (void)_addNoFlagsListResultItem:(id)arg1;
- (unsigned long long)listResultItemsCount;
- (void)clearListResultItems;
- (id)listResultItemAtIndex:(unsigned long long)arg1;
- (void)addListResultItem:(id)arg1;

@end
