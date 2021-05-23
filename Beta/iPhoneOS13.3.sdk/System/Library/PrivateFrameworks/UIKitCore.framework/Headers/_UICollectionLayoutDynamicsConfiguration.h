/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutDynamicsConfiguration : NSObject

{
    NSMutableArray *_dirtyItems;
    NSArray *_items;
    NSMutableDictionary *_behaviorDict;
    struct CGRect _previousVisibleBounds;
    struct CGRect _currentVisibleBounds;
}

@property (retain, nonatomic) NSMutableDictionary *behaviorDict;
@property (retain, nonatomic) NSArray *dynamicItems;
@property (nonatomic) struct CGRect previousVisibleBounds;
@property (nonatomic) struct CGRect currentVisibleBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_reset;
- (void)_setBehaviors:(id)arg1 forItem:(id)arg2;
- (id)_dirtyItems;
- (id)behaviorsForItem:(id)arg1;
- (void)setBehaviors:(id)arg1 forItem:(id)arg2;

@end
