/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface _UICollectionLayoutSpacing : NSObject <Swift>

{
    double _spacing;
    _Bool _isFlexible;
}

@property (nonatomic, readonly) double spacing;
@property (nonatomic, readonly) _Bool isFlexibleSpacing;
@property (nonatomic, readonly) _Bool isFixedSpacing;

+ (id)defaultSpacing;
+ (id)flexibleSpacing:(double)arg1;
+ (id)fixedSpacing:(double)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_apiRepresentation;
- (id)initWithSpacing:(double)arg1 flexible:(_Bool)arg2;

@end
