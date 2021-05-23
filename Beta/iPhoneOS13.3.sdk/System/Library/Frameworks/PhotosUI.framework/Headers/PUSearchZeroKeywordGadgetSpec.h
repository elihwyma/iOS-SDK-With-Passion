/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXGadgetSpec.h>

@class PXExtendedTraitCollection;

__attribute__((visibility("hidden")))
@interface PUSearchZeroKeywordGadgetSpec : PXGadgetSpec

{
    struct CGSize _layoutReferenceSize;
    PXExtendedTraitCollection *_traitCollection;
}

- (struct UIEdgeInsets)contentInsets;
- (id)initWithTraitCollection:(id)arg1 scrollAxis:(long long)arg2;
- (id)_contentInsetsInterpolator;

@end
