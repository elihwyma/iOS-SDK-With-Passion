/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _VideosExtrasShelfCollectionViewLayout : UICollectionViewFlowLayout

{
    NSDictionary *_rects;
    struct CGSize _contentSize;
}

@property (nonatomic, readonly) struct CGSize calculatedContentSize;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)_calculateSizes;

@end
