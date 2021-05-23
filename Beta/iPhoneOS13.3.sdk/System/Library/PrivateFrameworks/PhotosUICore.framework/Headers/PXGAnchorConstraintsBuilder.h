/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface PXGAnchorConstraintsBuilder : NSObject

{
    NSMutableArray *_constraints;
}

@property (copy, nonatomic, readonly) NSArray *constraints;

- (id)init;
- (void)keepSpriteWithReference:(id)arg1 referencingOptions:(unsigned long long)arg2 visuallyStableForAttribute:(long long)arg3;
- (void)keepVisiblePortionOfSpriteWithReference:(id)arg1 referencingOptions:(unsigned long long)arg2 padding:(struct UIEdgeInsets)arg3 visuallyStableForAttribute:(long long)arg4;
- (void)keepEdge:(unsigned int)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 lessThanOrEqualToVisibleEdge:(unsigned int)arg4 offset:(double)arg5;
- (void)keepEdge:(unsigned int)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 greaterThanOrEqualToVisibleEdge:(unsigned int)arg4 offset:(double)arg5;
- (void)_keepEdge:(unsigned int)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 inequality:(long long)arg4 visibleEdge:(unsigned int)arg5 offset:(double)arg6;

@end
