/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UICollectionLayoutVisualFormatItem.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutVisualTreeNode : _UICollectionLayoutVisualFormatItem

{
    int _axis;
    NSArray *_children;
}

@property (retain, nonatomic) NSArray *children;
@property (nonatomic) int axis;

- (id)description;
- (_Bool)isVerticalGroup;
- (_Bool)isHorizontalGroup;
- (id)initWithParent:(id)arg1 children:(id)arg2 axis:(int)arg3;

@end
