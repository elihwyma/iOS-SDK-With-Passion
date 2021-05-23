/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSCollectionLayoutItem, NSIndexPath, NSString, UIBezierPath, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface NSCollectionLayoutVisibleItem : NSObject

{
    _Bool _dirty;
    UICollectionViewLayoutAttributes *_layoutAttributes;
    NSCollectionLayoutItem *_layoutItem;
}

@property (retain, nonatomic) UICollectionViewLayoutAttributes *layoutAttributes;
@property (retain, nonatomic) NSCollectionLayoutItem *layoutItem;
@property (nonatomic, getter=isDirty) _Bool dirty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGPoint center;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic, readonly) unsigned long long collisionBoundsType;
@property (nonatomic, readonly) UIBezierPath *collisionBoundingPath;
@property (nonatomic) double alpha;
@property (nonatomic) long long zIndex;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic) struct CATransform3D transform3D;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) unsigned long long representedElementCategory;
@property (nonatomic, readonly) NSString *representedElementKind;

- (id)initWithLayoutAttributes:(id)arg1 layoutItem:(id)arg2;

@end
