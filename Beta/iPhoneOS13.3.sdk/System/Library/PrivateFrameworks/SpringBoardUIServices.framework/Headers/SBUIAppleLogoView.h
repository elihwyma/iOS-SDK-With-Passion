/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIView.h>

@class PUIProgressWindow;

@interface SBUIAppleLogoView : UIView

{
    UIView *_layerView;
    PUIProgressWindow *_progressWindow;
    float _progress;
}

@property (nonatomic) float progress;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 appearance:(long long)arg2 progressBarVisible:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 inverted:(_Bool)arg2 progressBarVisible:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 useWhiteLogo:(_Bool)arg2 progressBarVisible:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 progressBarVisible:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 inverted:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 useWhiteLogo:(_Bool)arg2;

@end
