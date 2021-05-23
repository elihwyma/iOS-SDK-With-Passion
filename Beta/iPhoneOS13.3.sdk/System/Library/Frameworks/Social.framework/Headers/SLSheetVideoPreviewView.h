/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLSheetImagePreviewView.h>

@class UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SLSheetVideoPreviewView : SLSheetImagePreviewView

{
    UIView *_infoBar;
    UIImageView *_videoGlyphView;
    UILabel *_durationLabel;
}

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setVideoDuration:(double)arg1;
- (void)_applyConstraints;

@end
