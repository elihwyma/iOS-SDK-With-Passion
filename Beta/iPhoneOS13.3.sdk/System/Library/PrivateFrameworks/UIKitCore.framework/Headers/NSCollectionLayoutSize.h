/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSCollectionLayoutDimension;

@interface NSCollectionLayoutSize : NSObject <Swift>

{
    NSCollectionLayoutDimension *_widthDimension;
    NSCollectionLayoutDimension *_heightDimension;
    long long _widthSemantic;
    long long _heightSemantic;
    struct CGSize _size;
}

@property (nonatomic) struct CGSize size;
@property (nonatomic) long long widthSemantic;
@property (nonatomic) long long heightSemantic;
@property (retain, nonatomic) NSCollectionLayoutDimension *widthDimension;
@property (retain, nonatomic) NSCollectionLayoutDimension *heightDimension;

+ (id)sizeWithWidthDimension:(id)arg1 heightDimension:(id)arg2;
+ (id)sizeWithAbsoluteSize:(struct CGSize)arg1;
+ (id)sizeWithContainerSize;
+ (id)sizeWithContainerWidthFactor:(double)arg1 containerHeightFactor:(double)arg2;
+ (id)sizeWithSize:(struct CGSize)arg1 widthSemantic:(long long)arg2 heightSemantic:(long long)arg3;
+ (id)sizeWithWidth:(double)arg1 widthSemantic:(long long)arg2 height:(double)arg3 heightSemantic:(long long)arg4;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isContainerSize;
- (_Bool)_isEstimatedForAxis:(int)arg1;
- (_Bool)isEstimated;
- (struct CGSize)_effectiveSizeForContainer:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 widthSemantic:(long long)arg2 heightSemantic:(long long)arg3 width:(id)arg4 height:(id)arg5;
- (struct CGSize)_effectiveSizeForContainer:(id)arg1 ignoringInsets:(_Bool)arg2;

@end
