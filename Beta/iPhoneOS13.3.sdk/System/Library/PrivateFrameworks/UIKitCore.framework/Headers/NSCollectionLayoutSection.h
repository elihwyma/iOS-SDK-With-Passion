/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSCollectionLayoutGroup, NSDictionary, NSIndexSet;

@protocol _UICollectionLayoutSectionCallback;

@interface NSCollectionLayoutSection : NSObject <Swift>

{
    NSIndexSet *_pinnedBoundarySupplementaryItemIndexes;
    _Bool _hasBackgroundDecorationItem;
    NSDictionary *_supplementaryItemsDict;
    NSDictionary *_decorationItemsDict;
    _Bool _isEmptySection;
    _Bool _prefersListSolver;
    _Bool _supplementariesFollowContentInsets;
    double _interGroupSpacing;
    long long _orthogonalScrollingBehavior;
    NSArray *_boundarySupplementaryItems;
    CDUnknownBlockType _visibleItemsInvalidationHandler;
    NSArray *_decorationItems;
    NSCollectionLayoutGroup *_group;
    NSArray *_supplementaryItems;
    NSIndexSet *_pinnedSupplementaryItemIndexes;
    NSDictionary *_decorationItemssDict;
    id <_UICollectionLayoutSectionCallback> _callback;
    struct CGSize _contentSize;
    struct NSDirectionalEdgeInsets _contentInsets;
}

@property (copy, nonatomic) NSCollectionLayoutGroup *group;
@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) NSIndexSet *pinnedSupplementaryItemIndexes;
@property (nonatomic, readonly) NSDictionary *supplementaryItemsDict;
@property (nonatomic, readonly) NSDictionary *decorationItemssDict;
@property (nonatomic) struct CGSize contentSize;
@property (nonatomic, readonly, getter=_callback) id <_UICollectionLayoutSectionCallback> callback;
@property (nonatomic) _Bool prefersListSolver;
@property (nonatomic) struct NSDirectionalEdgeInsets contentInsets;
@property (nonatomic) double interGroupSpacing;
@property (nonatomic) long long orthogonalScrollingBehavior;
@property (copy, nonatomic) NSArray *boundarySupplementaryItems;
@property (nonatomic) _Bool supplementariesFollowContentInsets;
@property (copy, nonatomic) CDUnknownBlockType visibleItemsInvalidationHandler;
@property (copy, nonatomic) NSArray *decorationItems;

+ (id)sectionWithGroup:(id)arg1;
+ (id)_emptySection;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_checkForDuplicateSupplementaryItemKindsAndThrowIfFound;
- (_Bool)scrollsOrthogonally;
- (_Bool)_isListSolverCompatibleForLayoutAxis:(int)arg1;
- (_Bool)_containsBackgroundDecorationItem:(id)arg1;
- (id)initWithGroup:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2 supplementaryItems:(id)arg3 boundarySupplementartItems:(id)arg4 pinnedSupplementaryItemIndexes:(id)arg5 interGroupSpacing:(double)arg6 visibleItemsInvalidationHandler:(CDUnknownBlockType)arg7 supplementariesFollowInsets:(_Bool)arg8 decorationItems:(id)arg9 orthogonalScrollingBehavior:(long long)arg10 isEmptySection:(_Bool)arg11 prefersListSolver:(_Bool)arg12;
- (id)initWithLayoutGroup:(id)arg1;
- (_Bool)_isEmptySection;
- (id)pinnedBoundarySupplementaryItemIndexes;
- (id)decorationItemsDict;
- (_Bool)_hasVisibleItemsHandler;
- (_Bool)_hasBackgroundDecorationItem;
- (_Bool)_containsEstimatedSizeElement;
- (id)_auxillaryItemForElementKind:(id)arg1 category:(unsigned long long)arg2;

@end
