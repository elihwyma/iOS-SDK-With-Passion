/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface HRSimulatedAtrialFibrillationScreenView : UIView

{
    UIImageView *_quickLookIconView;
    UILabel *_quickLookTitleLabel;
    UILabel *_quickLookSubtitleLabel;
    UIView *_quickLookTitleContainer;
    UIView *_quickLookSubtitleContainer;
}

@property (retain, nonatomic) UIImageView *quickLookIconView;
@property (retain, nonatomic) UILabel *quickLookTitleLabel;
@property (retain, nonatomic) UILabel *quickLookSubtitleLabel;
@property (retain, nonatomic) UIView *quickLookTitleContainer;
@property (retain, nonatomic) UIView *quickLookSubtitleContainer;

- (id)init;
- (void)_setUpSubviews;
- (void)_layoutQuickLook;
- (id)_systemRedColor;

@end
