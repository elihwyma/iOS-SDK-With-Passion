/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface SKUIScrollingTabBarBackgroundView : UIView

{
    _UIBackdropView *_backdropView;
    UIView *_bottomHairlineView;
    UIView *_topHairlineView;
    _Bool _showsBackdrop;
    _Bool _showsBottomHairline;
    _Bool _showsTopHairline;
    _Bool _usesOpaqueColorForTopHairline;
    NSString *_backdropBarGroupName;
}

@property (copy, nonatomic) NSString *backdropBarGroupName;
@property (nonatomic) _Bool showsBackdrop;
@property (nonatomic) _Bool showsBottomHairline;
@property (nonatomic) _Bool showsTopHairline;
@property (nonatomic) _Bool usesOpaqueColorForTopHairline;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)_updateTopHairlineColor;

@end
