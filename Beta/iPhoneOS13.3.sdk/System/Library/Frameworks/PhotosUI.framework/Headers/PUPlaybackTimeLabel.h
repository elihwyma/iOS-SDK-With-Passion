/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface PUPlaybackTimeLabel : UIView

{
    _Bool __needsUpdateBackground;
    _Bool __needsUpdateLabel;
    long long _format;
    UIView *__backgroundView;
    UILabel *__label;
    CDStruct_1b6d18a9 _currentPlaybackTime;
    CDStruct_1b6d18a9 _playbackDuration;
}

@property (nonatomic, readonly) UIView *_backgroundView;
@property (nonatomic, readonly) UILabel *_label;
@property (nonatomic, setter=_setNeedsUpdateBackground:) _Bool _needsUpdateBackground;
@property (nonatomic, setter=_setNeedsUpdateLabel:) _Bool _needsUpdateLabel;
@property (nonatomic) long long format;
@property (nonatomic) CDStruct_1b6d18a9 currentPlaybackTime;
@property (nonatomic) CDStruct_1b6d18a9 playbackDuration;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateLabelIfNeeded;
- (void)_updateIfNeeded;
- (void)_invalidateBackground;
- (void)_updateBackgroundIfNeeded;
- (void)_invalidateLabel;
- (struct CGSize)_maximumLabelSizeWithDuration:(double)arg1;
- (id)_labelTextWithFormat:(long long)arg1 elapsedInterval:(double)arg2 remainingInterval:(double)arg3;
- (id)_stringFromTimeInterval:(double)arg1;

@end
