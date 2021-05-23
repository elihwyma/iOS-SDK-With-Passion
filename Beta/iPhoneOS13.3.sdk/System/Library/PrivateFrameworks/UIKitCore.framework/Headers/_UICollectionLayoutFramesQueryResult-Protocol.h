/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSCollectionLayoutItem, NSCollectionLayoutSupplementaryItem, NSUUID;

@protocol _UICollectionLayoutAuxillaryItem;

@protocol _UICollectionLayoutFramesQueryResult <Swift>

@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) long long zIndex;
@property (nonatomic, readonly) long long effectiveZIndex;
@property (nonatomic, readonly) long long resultKind;
@property (nonatomic, readonly) NSCollectionLayoutItem *item;
@property (nonatomic, readonly) NSCollectionLayoutSupplementaryItem *supplementaryItem;
@property (nonatomic, readonly) id <_UICollectionLayoutAuxillaryItem> auxillaryItem;
@property (nonatomic, readonly) long long auxillaryKind;
@property (nonatomic, readonly) NSUUID *supplementaryEnrollmentIdentifier;
@property (nonatomic, readonly) _Bool isSupplementary;
@property (nonatomic, readonly) _Bool isDecoration;
@property (nonatomic, readonly) _Bool isAuxillary;
@property (nonatomic, readonly) _Bool isItem;
@property (nonatomic, readonly) _Bool isAuxillaryKindGlobal;
@property (nonatomic, readonly) _Bool isAuxillaryKindSection;
@property (nonatomic, readonly) _Bool isAuxillaryKindGroup;
@property (nonatomic, readonly) _Bool isAuxillaryKindItem;

- (unsigned short)copyWithFrame:index: /* Error: Ran out of types for this method. */;
- (unsigned short)copyWithIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)copyWithOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)copyWithOffset:index:supplementaryEnrollmentIdentifier: /* Error: Ran out of types for this method. */;

@end
