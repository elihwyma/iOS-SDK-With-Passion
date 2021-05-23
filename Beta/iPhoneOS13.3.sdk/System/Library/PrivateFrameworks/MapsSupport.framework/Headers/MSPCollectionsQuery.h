/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/NewMSPQuery.h>

@class MSPFavoritesContainer, NSArray;

@interface MSPCollectionsQuery : NewMSPQuery

{
    MSPFavoritesContainer *_itemContainer;
    NewMSPQuery *_itemQuery;
}

@property (readonly) NSArray *contents;
@property (retain, nonatomic) MSPFavoritesContainer *itemContainer;
@property (retain, nonatomic) NewMSPQuery *itemQuery;

- (void)setCachedContents:(id)arg1;
- (void)processContentsUsingBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryContentsDidChange:(id)arg1 contentsVersion:(unsigned long long)arg2;
- (void)addOrUpdateObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)subQueryFilteredWithBlock:(CDUnknownBlockType)arg1;
- (void)addOrUpdateObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCollectionsContainer:(id)arg1 itemContainer:(id)arg2 delegate:(id)arg3 filteredWithBlock:(CDUnknownBlockType)arg4;
- (id)initWithCollectionsContainer:(id)arg1 itemContainer:(id)arg2 delegate:(id)arg3;

@end
