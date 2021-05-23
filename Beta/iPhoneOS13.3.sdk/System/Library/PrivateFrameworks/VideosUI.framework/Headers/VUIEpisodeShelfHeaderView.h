/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionReusableView.h>

@class IKViewElement, VUISeasonPickerButton;

__attribute__((visibility("hidden")))
@interface VUIEpisodeShelfHeaderView : UICollectionReusableView

{
    VUISeasonPickerButton *_button;
    IKViewElement *_viewElement;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (nonatomic, readonly) VUISeasonPickerButton *button;

+ (id)configureWithElement:(id)arg1 existingView:(id)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setButton:(id)arg1;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (void)switchToIndex:(unsigned long long)arg1;

@end
