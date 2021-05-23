/*
 Image: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
 */

#import <UIKitCore/UIView.h>

@class UIButton, UICollectionView;

@interface LUILogLocatorView : UIView

{
    UIButton *_upArrowButton;
    UIButton *_downArrowButton;
    UIButton *_screenshotButton;
    UICollectionView *_screenshotCollectionView;
}

@property (retain, nonatomic) UIButton *upArrowButton;
@property (retain, nonatomic) UIButton *downArrowButton;
@property (retain, nonatomic) UIButton *screenshotButton;
@property (retain, nonatomic) UICollectionView *screenshotCollectionView;

- (void)_setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_createButtonWithImageName:(id)arg1;
- (id)_createScreenshotCollectionView;
- (void)handleOrientationChange:(long long)arg1;
- (id)_createElementStackViewWithElements:(id)arg1;

@end
