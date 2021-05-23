/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, SSVellumOpacityControl, UIBarButtonItem, UINavigationBar, UINavigationItem;

@interface SSChromePlaceholderView : UIView

{
    UINavigationItem *_managedNavigationItem;
    UIBarButtonItem *_shareItem;
    UIBarButtonItem *_doneItem;
    UIBarButtonItem *_deleteItem;
    UIBarButtonItem *_undoItem;
    UIBarButtonItem *_redoItem;
    UIBarButtonItem *_undoRedoSpacerItem;
    UIBarButtonItem *_opacityItem;
    SSVellumOpacityControl *_opacityControl;
    UIView *_opacityView;
    UINavigationBar *_topBar;
    UINavigationBar *_topBarBackground;
    UIView *_topBarSeparatorLine;
    NSArray *_barItems;
    double _contentAlpha;
}

@property (nonatomic) double contentAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (long long)positionForBar:(id)arg1;
- (double)topBarHeight;
- (void)_initializeBarButtonItems;
- (void)_layoutTopBar;
- (void)_updateBarButtonItemPositionsAnimated:(_Bool)arg1;

@end
