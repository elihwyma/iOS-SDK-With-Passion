/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSOrderedSet;

@protocol SBRecentDisplayItemsPersistenceDelegate;

@interface SBRecentDisplayItemsDataStore : NSObject

{
    NSArray *_recentLayouts;
    id <SBRecentDisplayItemsPersistenceDelegate> _persistenceDelegate;
    _Bool _shouldFallbackToRecentAppLayouts;
}

@property (copy, nonatomic) NSOrderedSet *displayItems;
@property (weak, nonatomic) id <SBRecentDisplayItemsPersistenceDelegate> persistenceDelegate;

- (id)init;
- (id)initWithRecentLayouts:(id)arg1 fallbackToRecentAppLayouts:(_Bool)arg2;
- (id)_displayItemsFromRecentAppLayouts:(id)arg1;

@end
