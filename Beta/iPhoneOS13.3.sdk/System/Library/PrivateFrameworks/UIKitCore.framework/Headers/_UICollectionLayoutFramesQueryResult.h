/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSCollectionLayoutItem, NSCollectionLayoutSupplementaryItem, NSUUID;

@protocol _UICollectionLayoutAuxillaryItem;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutFramesQueryResult : NSObject <Swift>

{
    long long _index;
    long long _zIndex;
    long long _resultKind;
    NSCollectionLayoutItem *_item;
    NSUUID *_supplementaryEnrollmentIdentifier;
    long long _auxillaryKind;
    struct CGRect _frame;
}

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

+ (id)kindIndexKeyForKind:(id)arg1 index:(long long)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithFrame:(struct CGRect)arg1 index:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 index:(long long)arg2 zIndex:(long long)arg3 resultKind:(long long)arg4 item:(id)arg5 auxillaryKind:(long long)arg6 supplementaryEnrollmentIdentifier:(id)arg7;
- (id)copyWithIndex:(long long)arg1;
- (id)copyWithOffset:(struct CGPoint)arg1;
- (id)copyWithOffset:(struct CGPoint)arg1 index:(long long)arg2 supplementaryEnrollmentIdentifier:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 index:(long long)arg2 zIndex:(long long)arg3 resultKind:(long long)arg4 item:(id)arg5;
- (id)kindIndexKey;

@end
