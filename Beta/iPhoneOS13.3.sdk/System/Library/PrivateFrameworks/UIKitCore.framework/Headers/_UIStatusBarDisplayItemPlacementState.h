/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, _UIStatusBarDisplayItemPlacement, _UIStatusBarRegion;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementState : NSObject

{
    _UIStatusBarDisplayItemPlacement *_placement;
    _UIStatusBarRegion *_region;
    NSMutableArray *_relations;
}

@property (retain, nonatomic) NSMutableArray *relations;
@property (nonatomic, readonly) _UIStatusBarDisplayItemPlacement *placement;
@property (weak, nonatomic, readonly) _UIStatusBarRegion *region;
@property (nonatomic, readonly, getter=areRelationsFulfilled) _Bool relationsFulfilled;
@property (nonatomic, readonly) _Bool canBeEnabled;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) long long priority;

+ (id)stateForDisplayItemPlacement:(id)arg1 region:(id)arg2;

- (id)description;

@end
