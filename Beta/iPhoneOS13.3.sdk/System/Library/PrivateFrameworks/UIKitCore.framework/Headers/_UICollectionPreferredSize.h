/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSCollectionLayoutSize;

__attribute__((visibility("hidden")))
@interface _UICollectionPreferredSize : NSObject

{
    struct CGSize _originalSize;
    struct CGSize _fittingSize;
    struct CGSize _preferredSize;
    NSCollectionLayoutSize *_layoutSize;
}

@property (nonatomic, readonly) struct CGSize originalSize;
@property (nonatomic, readonly) struct CGSize fittingSize;
@property (nonatomic, readonly) NSCollectionLayoutSize *layoutSize;
@property (nonatomic, readonly) struct CGSize preferredSize;

- (id)description;
- (id)initWithOriginalSize:(struct CGSize)arg1 fittingSize:(struct CGSize)arg2 layoutSize:(id)arg3;

@end
