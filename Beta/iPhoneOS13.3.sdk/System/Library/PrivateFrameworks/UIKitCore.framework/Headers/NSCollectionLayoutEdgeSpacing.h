/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSCollectionLayoutSpacing;

@interface NSCollectionLayoutEdgeSpacing : NSObject <Swift>

{
    NSCollectionLayoutSpacing *_leading;
    NSCollectionLayoutSpacing *_top;
    NSCollectionLayoutSpacing *_trailing;
    NSCollectionLayoutSpacing *_bottom;
}

@property (nonatomic, readonly) NSCollectionLayoutSpacing *leading;
@property (nonatomic, readonly) NSCollectionLayoutSpacing *top;
@property (nonatomic, readonly) NSCollectionLayoutSpacing *trailing;
@property (nonatomic, readonly) NSCollectionLayoutSpacing *bottom;

+ (id)defaultSpacing;
+ (id)flexibleSpacing:(double)arg1;
+ (id)fixedSpacing:(double)arg1;
+ (id)spacingForLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_hasSpacing;
- (struct NSDirectionalEdgeInsets)edgeOutsets;
- (id)initWithLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4;
- (id)_spacingForEdge:(unsigned long long)arg1;
- (_Bool)isSpacingFixedForEdge:(unsigned long long)arg1;
- (_Bool)isSpacingFlexibleForEdge:(unsigned long long)arg1;
- (double)spacingForEdge:(unsigned long long)arg1;

@end
