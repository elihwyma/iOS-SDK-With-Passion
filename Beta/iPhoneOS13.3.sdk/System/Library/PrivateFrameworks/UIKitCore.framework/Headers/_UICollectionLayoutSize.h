/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class _UICollectionLayoutDimension;

@interface _UICollectionLayoutSize : NSObject <Swift>

{
    _UICollectionLayoutDimension *_width;
    _UICollectionLayoutDimension *_height;
}

@property (nonatomic, readonly) _UICollectionLayoutDimension *width;
@property (nonatomic, readonly) _UICollectionLayoutDimension *height;

+ (id)sizeWithWidth:(id)arg1 height:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_apiRepresentation;
- (id)initWithWidth:(id)arg1 height:(id)arg2;

@end
