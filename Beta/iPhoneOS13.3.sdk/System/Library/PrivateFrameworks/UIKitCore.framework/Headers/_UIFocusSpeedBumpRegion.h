/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFocusRegion.h>

@interface _UIFocusSpeedBumpRegion : _UIFocusRegion

{
    unsigned long long _speedBumpEdges;
}

@property (nonatomic) unsigned long long speedBumpEdges;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_canOccludeRegionsBelow;
- (_Bool)_canBeOccludedByRegionsAbove;
- (unsigned long long)_boundariesBlockingFocusMovementRequest:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 speedBumpEdges:(unsigned long long)arg2;

@end
