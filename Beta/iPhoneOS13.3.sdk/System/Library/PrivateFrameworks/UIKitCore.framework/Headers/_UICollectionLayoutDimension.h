/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface _UICollectionLayoutDimension : NSObject <Swift>

{
    long long _semantic;
    double _dimension;
}

@property (nonatomic, readonly) double dimension;
@property (nonatomic, readonly) _Bool isAbsolute;
@property (nonatomic, readonly) _Bool isEstimated;
@property (nonatomic, readonly) _Bool isFractionalWidth;
@property (nonatomic, readonly) _Bool isFractionalHeight;

+ (id)fractionalWidth:(double)arg1;
+ (id)fractionalHeight:(double)arg1;
+ (id)absolute:(double)arg1;
+ (id)estimated:(double)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_apiRepresentation;
- (id)initWithSemantic:(long long)arg1 dimension:(double)arg2;

@end
