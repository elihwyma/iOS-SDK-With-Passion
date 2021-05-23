/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface NSCollectionLayoutDimension : NSObject <Swift>

{
    double _dimension;
    long long _semantic;
}

@property (nonatomic) long long semantic;
@property (nonatomic) double dimension;
@property (nonatomic, readonly) _Bool isFractionalWidth;
@property (nonatomic, readonly) _Bool isFractionalHeight;
@property (nonatomic, readonly) _Bool isAbsolute;
@property (nonatomic, readonly) _Bool isEstimated;

+ (id)fractionalWidthDimension:(double)arg1;
+ (id)fractionalHeightDimension:(double)arg1;
+ (id)absoluteDimension:(double)arg1;
+ (id)estimatedDimension:(double)arg1;
+ (id)_dimensionWithDimension:(double)arg1 semantic:(long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDimension:(double)arg1 semantic:(long long)arg2;

@end
