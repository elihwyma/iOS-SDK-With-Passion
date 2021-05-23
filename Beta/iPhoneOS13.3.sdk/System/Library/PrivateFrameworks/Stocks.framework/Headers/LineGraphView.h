/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <UIKit/UIView.h>

@class TintedView, UIImage;

@interface LineGraphView : UIView

{
    _Bool _showingTintedLine;
    UIImage *_lineImage;
    UIView *_tintedLineClipView;
    TintedView *_tintedLineView;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)resizeSelectedLineClipViewWithLeftX:(double)arg1 rightX:(double)arg2;
- (void)setShowingSelectedLine:(_Bool)arg1;
- (void)setGraphImageSet:(id)arg1;
- (void)setSelectedLineImage:(id)arg1;

@end
