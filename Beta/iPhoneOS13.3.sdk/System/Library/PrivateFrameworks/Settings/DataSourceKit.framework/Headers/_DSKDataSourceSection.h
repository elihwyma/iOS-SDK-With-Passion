/*
 Image: /System/Library/PrivateFrameworks/Settings/DataSourceKit.framework/DataSourceKit
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface _DSKDataSourceSection : NSObject

{
    id _sectionItem;
    NSMutableOrderedSet *__items;
}

@property (retain, nonatomic) NSMutableOrderedSet *_items;
@property (retain, nonatomic) id sectionItem;
@property (nonatomic, readonly) long long numberOfItems;

- (void)deleteAllItems;
- (id)itemAtIndex:(long long)arg1;
- (_Bool)containsItem:(id)arg1;
- (void)appendItems:(id)arg1;
- (void)deleteItems:(id)arg1;
- (void)insertItems:(id)arg1 afterItem:(id)arg2;
- (void)insertItems:(id)arg1 beforeItem:(id)arg2;
- (id)initWithSectionItem:(id)arg1;

@end
