/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class AVTimeFormatter, NSLayoutConstraint, NSObject, UILabel, UISlider;

@protocol PUCropVideoScrubberViewDelegate;

__attribute__((visibility("hidden")))
@interface PUCropVideoScrubberView : UIView

{
    CDStruct_1b6d18a9 _startingTime;
    CDStruct_1b6d18a9 _endingTime;
    CDStruct_1b6d18a9 _currentTime;
    AVTimeFormatter *_beforeTimeFormatter;
    AVTimeFormatter *_afterTimeFormatter;
    _Bool _beforeTimeLabelOffset;
    _Bool _afterTimeLabelOffset;
    NSLayoutConstraint *_beforeLabelVerticalConstraint;
    NSLayoutConstraint *_afterLabelVerticalConstraint;
    UISlider *_scrubberSlider;
    UILabel *_beforeTimeLabel;
    UILabel *_afterTimeLabel;
    NSObject<PUCropVideoScrubberViewDelegate> *_delegate;
}

@property (retain, nonatomic) UISlider *scrubberSlider;
@property (retain, nonatomic) UILabel *beforeTimeLabel;
@property (retain, nonatomic) UILabel *afterTimeLabel;
@property (weak, nonatomic) NSObject<PUCropVideoScrubberViewDelegate> *delegate;

- (void)layoutSubviews;
- (void)setCurrentTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithStartingTime:(CDStruct_1b6d18a9)arg1 endingTime:(CDStruct_1b6d18a9)arg2 currentTime:(CDStruct_1b6d18a9)arg3;
- (void)videoScrubberDoneChanging;
- (void)videoScrubberValueChanged:(id)arg1;
- (void)offsetTimeLabelsIfNecessary;

@end
