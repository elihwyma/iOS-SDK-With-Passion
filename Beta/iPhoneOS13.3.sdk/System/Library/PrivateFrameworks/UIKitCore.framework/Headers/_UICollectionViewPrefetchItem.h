/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UICollectionReusableView, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface _UICollectionViewPrefetchItem : NSObject

{
    _Bool _hasPrefetchedData;
    UICollectionViewLayoutAttributes *_attributes;
    UICollectionReusableView *_view;
}

@property (retain, nonatomic) UICollectionViewLayoutAttributes *attributes;
@property (nonatomic) _Bool hasPrefetchedData;
@property (retain, nonatomic) UICollectionReusableView *view;

- (id)description;
- (id)initWithAttributes:(id)arg1;

@end
