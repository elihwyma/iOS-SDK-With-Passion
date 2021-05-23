/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface REUpNextDisjointSet : NSObject

{
    NSMapTable *_nodes;
}

@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (_Bool)containsItem:(id)arg1;
- (void)connectItem:(id)arg1 withItem:(id)arg2;
- (id)allItemsConnectedToItem:(id)arg1;
- (_Bool)isItem:(id)arg1 connectedToItem:(id)arg2;

@end
