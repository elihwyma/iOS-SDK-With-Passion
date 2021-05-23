/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString;

@interface PXSelectionBadgeUIViewTile : UIView <Swift>

{
    _Bool _needsUpdate;
    UIView *_selectedView;
    UIView *_unselectedView;
    _Bool __selected;
}

@property (nonatomic, setter=_setSelected:) _Bool _selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

+ (struct CGSize)preferredSize;

- (void)_invalidate;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;
- (void)_updateBadgeViewIfNeeded;
- (void)_showSelectedView;
- (void)_showUnselectedView;

@end
