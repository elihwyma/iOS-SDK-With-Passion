/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface SKUISettingsObjectStore : NSObject

{
    NSMutableOrderedSet *_allObjects;
    _Bool _dirty;
    NSMutableOrderedSet *_visibleObjects;
}

- (id)init;
- (id)description;
- (void)removeObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)allObjects;
- (unsigned long long)numberOfObjects;
- (void)addObject:(id)arg1 hidden:(_Bool)arg2;
- (unsigned long long)numberOfVisibleObjects;
- (void)hideObject:(id)arg1;
- (unsigned long long)indexOfVisibleObject:(id)arg1;
- (_Bool)objectIsVisible:(id)arg1;
- (void)enumerateObjects:(CDUnknownBlockType)arg1;
- (void)revealObject:(id)arg1;
- (id)visibleObjectAtIndex:(unsigned long long)arg1;
- (void)_updateVisibleOrder;
- (void)enumerateVisibleObjects:(CDUnknownBlockType)arg1;

@end
