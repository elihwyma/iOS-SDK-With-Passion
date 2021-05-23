/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@interface _TVCollectionViewFlowLayout : UICollectionViewFlowLayout

{
    _Bool _heterogeneous;
}

@property (nonatomic, getter=isHeterogeneous) _Bool heterogeneous;

- (id)init;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (long long)developmentLayoutDirection;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;
- (double)contentHeightThatFitsItemCount:(long long)arg1 expectedWidth:(double)arg2;

@end
