/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOMultiTabsState : PBCodable

{
    unsigned int _currentTabIndex;
    unsigned int _numberOfTabsOpen;
    struct {
        unsigned int has_currentTabIndex:1;
        unsigned int has_numberOfTabsOpen:1;
    } _flags;
}

@property (nonatomic) _Bool hasNumberOfTabsOpen;
@property (nonatomic) unsigned int numberOfTabsOpen;
@property (nonatomic) _Bool hasCurrentTabIndex;
@property (nonatomic) unsigned int currentTabIndex;

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
