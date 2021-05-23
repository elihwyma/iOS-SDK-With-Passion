/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIControl.h>

@class NSArray, VUILabel, VUITextLayout, _TVImageView;

@protocol VUISeasonPickerButtonDelegate;

__attribute__((visibility("hidden")))
@interface VUISeasonPickerButton : UIControl

{
    NSArray *_seasonTitles;
    id <VUISeasonPickerButtonDelegate> _delegate;
    unsigned long long _currentIndex;
    VUILabel *_currentLabel;
    VUILabel *_altLabel;
    _TVImageView *_chevronDownImageView;
    VUITextLayout *_buttonTextLayout;
}

@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) VUILabel *currentLabel;
@property (retain, nonatomic) VUILabel *altLabel;
@property (retain, nonatomic) _TVImageView *chevronDownImageView;
@property (retain, nonatomic) VUITextLayout *buttonTextLayout;
@property (retain, nonatomic) NSArray *seasonTitles;
@property (weak, nonatomic) id <VUISeasonPickerButtonDelegate> delegate;

+ (id)configureWithExistingView:(id)arg1;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_buttonTapped:(id)arg1;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (void)_updateLabelsWithSeasonTitles:(id)arg1;
- (void)switchToIndex:(unsigned long long)arg1;

@end
