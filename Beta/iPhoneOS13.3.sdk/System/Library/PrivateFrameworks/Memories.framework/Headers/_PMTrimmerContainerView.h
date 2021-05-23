/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@interface _PMTrimmerContainerView : UIView

{
    UIView *_movieScrubber;
    UIView *_debugOverlay;
}

@property (retain, nonatomic) UIView *movieScrubber;
@property (retain, nonatomic) UIView *debugOverlay;

- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
