/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionReusableView.h>

@class NSString, PXUIAssetBadgeView;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingOptionView : UICollectionReusableView

{
    PXUIAssetBadgeView *_toggleGlyphButton;
    id _target;
    SEL _action;
    _Bool _interactive;
    _Bool _toggled;
}

@property (nonatomic, getter=isInteractive) _Bool interactive;
@property (nonatomic, getter=isToggled) _Bool toggled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2;

@end
