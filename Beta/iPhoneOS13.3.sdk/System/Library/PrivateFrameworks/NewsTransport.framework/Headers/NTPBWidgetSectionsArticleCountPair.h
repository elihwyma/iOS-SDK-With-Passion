/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBWidgetSectionsArticleCountPair : PBCodable

{
    CDStruct_5df41632 _countOfArticlesExposedEachSections;
    NSString *_widgetSectionIdsExposed;
}

@property (nonatomic, readonly) _Bool hasWidgetSectionIdsExposed;
@property (retain, nonatomic) NSString *widgetSectionIdsExposed;
@property (nonatomic, readonly) unsigned long long countOfArticlesExposedEachSectionsCount;
@property (nonatomic, readonly) long long *countOfArticlesExposedEachSections;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (long long)countOfArticlesExposedEachSectionAtIndex:(unsigned long long)arg1;
- (void)addCountOfArticlesExposedEachSection:(long long)arg1;
- (void)clearCountOfArticlesExposedEachSections;
- (void)setCountOfArticlesExposedEachSections:(long long *)arg1 count:(unsigned long long)arg2;

@end
