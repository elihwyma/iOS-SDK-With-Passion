/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewLayoutAttributes.h>

__attribute__((visibility("hidden")))
@interface PUSectionedGridLayoutAttributes : UICollectionViewLayoutAttributes

{
    _Bool _floating;
    _Bool _extendsTopContent;
    _Bool _exists;
    double _interactiveTransitionProgress;
}

@property (nonatomic) _Bool floating;
@property (nonatomic) double interactiveTransitionProgress;
@property (nonatomic) _Bool extendsTopContent;
@property (nonatomic) _Bool exists;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
