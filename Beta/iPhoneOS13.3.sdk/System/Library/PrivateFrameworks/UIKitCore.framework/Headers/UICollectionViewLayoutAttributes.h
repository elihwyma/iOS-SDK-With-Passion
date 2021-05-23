/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSIndexPath, NSString, UIBezierPath;

@interface UICollectionViewLayoutAttributes : NSObject <Swift>

{
    NSString *_elementKind;
    NSIndexPath *_indexPath;
    NSString *_reuseIdentifier;
    struct CGPoint _center;
    struct CGSize _size;
    struct CGRect _frame;
    double _alpha;
    long long _zPosition;
    struct CATransform3D _transform;
    NSString *_isCloneString;
    struct {
        unsigned int isCellKind:1;
        unsigned int isDecorationView:1;
        unsigned int isHidden:1;
        unsigned int isClone:1;
    } _layoutFlags;
    long long _zIndex;
    unsigned long long _maskedCorners;
    struct UIEdgeInsets _defaultLayoutMargins;
}

@property (nonatomic, getter=_maskedCorners, setter=_setMaskedCorners:) unsigned long long maskedCorners;
@property (nonatomic, getter=_defaultLayoutMargins, setter=_setDefaultLayoutMargins:) struct UIEdgeInsets defaultLayoutMargins;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) struct CGPoint center;
@property (nonatomic) struct CGSize size;
@property (nonatomic) struct CATransform3D transform3D;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) double alpha;
@property (nonatomic) long long zIndex;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic, readonly) unsigned long long representedElementCategory;
@property (nonatomic, readonly) NSString *representedElementKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long collisionBoundsType;
@property (nonatomic, readonly) UIBezierPath *collisionBoundingPath;

+ (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2;
+ (id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2;
+ (id)layoutAttributesForCellWithIndexPath:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_elementKind;
- (_Bool)_isCell;
- (_Bool)_isSupplementaryView;
- (_Bool)_isDecorationView;
- (void)_setReuseIdentifier:(id)arg1;
- (long long)_zPosition;
- (_Bool)isSizeEqualForPreferredFittingAttributes:(id)arg1;
- (id)__indexPath;
- (id)__elementKind;
- (_Bool)_isEquivalentTo:(id)arg1;
- (_Bool)_isTransitionVisibleTo:(id)arg1;
- (id)_reuseIdentifier;
- (_Bool)_isClone;
- (void)_setZPosition:(long long)arg1;
- (void)_setIsClone:(_Bool)arg1;
- (void)_setElementKind:(id)arg1;
- (id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;

@end
