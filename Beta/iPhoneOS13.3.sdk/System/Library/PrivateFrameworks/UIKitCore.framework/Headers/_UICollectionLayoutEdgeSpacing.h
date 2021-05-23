/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class _UICollectionLayoutSpacing;

@interface _UICollectionLayoutEdgeSpacing : NSObject <Swift>

{
    _UICollectionLayoutSpacing *_leading;
    _UICollectionLayoutSpacing *_top;
    _UICollectionLayoutSpacing *_trailing;
    _UICollectionLayoutSpacing *_bottom;
}

@property (nonatomic, readonly) _UICollectionLayoutSpacing *leading;
@property (nonatomic, readonly) _UICollectionLayoutSpacing *top;
@property (nonatomic, readonly) _UICollectionLayoutSpacing *trailing;
@property (nonatomic, readonly) _UICollectionLayoutSpacing *bottom;

+ (id)defaultSpacing;
+ (id)flexibleSpacing:(double)arg1;
+ (id)fixedSpacing:(double)arg1;
+ (id)spacingForLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4;
- (id)_apiRepresentation;

@end
