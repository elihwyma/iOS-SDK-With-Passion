/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class PUScrubberView;

__attribute__((visibility("hidden")))
@interface PUReviewScreenScrubberBar : UIView

{
    PUScrubberView *_scrubber;
}

@property (retain, nonatomic) PUScrubberView *scrubber;

- (void)layoutSubviews;

@end
