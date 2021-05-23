/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSArray, UILabel;

__attribute__((visibility("hidden")))
@interface PUTimeCodeOverlayView : UIView

{
    UILabel *_timecodeLabelView;
    UIView *_timecodeBackgroundView;
    UIView *_verticalLineView;
    NSArray *_overlayConstraints;
    double _displayedTimeInterval;
}

@property (nonatomic) double displayedTimeInterval;

- (void)didMoveToSuperview;
- (void)updateTimeDisplay;

@end
