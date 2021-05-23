/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXFeatureSpec.h>

__attribute__((visibility("hidden")))
@interface PUImportOneUpViewControllerSpec : PXFeatureSpec

{
    _Bool _allowsInterfaceRotation;
    double _interItemSpacing;
    unsigned long long _selectionBadgeCorner;
    unsigned long long _style;
    struct CGSize _selectionBadgeSize;
    struct UIOffset _selectionBadgeOffset;
}

@property (nonatomic, readonly) double interItemSpacing;
@property (nonatomic, readonly) struct CGSize selectionBadgeSize;
@property (nonatomic, readonly) struct UIOffset selectionBadgeOffset;
@property (nonatomic, readonly) unsigned long long selectionBadgeCorner;
@property (nonatomic, readonly) _Bool allowsInterfaceRotation;
@property (nonatomic, readonly) unsigned long long style;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 style:(unsigned long long)arg3;

@end
