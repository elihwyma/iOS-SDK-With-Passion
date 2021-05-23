/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UICollectionLayoutSupplementaryItem.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@interface _UICollectionLayoutBoundarySupplementaryItem : _UICollectionLayoutSupplementaryItem <Swift>

{
    NSString *_elementKind;
    long long _alignment;
    struct CGPoint _offset;
    _Bool _extendsBoundary;
    _Bool _pinToVisibleBounds;
}

@property (nonatomic) _Bool extendsBoundary;
@property (nonatomic) _Bool pinToVisibleBounds;
@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) struct CGPoint offset;

+ (id)boundarySupplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 offset:(struct CGPoint)arg4;
+ (id)boundarySupplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_apiRepresentation;
- (id)initWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 offset:(struct CGPoint)arg4 zIndex:(long long)arg5 contentInsets:(struct NSDirectionalEdgeInsets)arg6 extendsBoundary:(_Bool)arg7 pinToVisibleBounds:(_Bool)arg8;

@end
