/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface PXScoreView : UIView

{
    UILabel *_label;
    unsigned long long _colorScale;
}

- (id)init;
- (void)setScore:(double)arg1;
- (void)layoutSubviews;
- (id)initWithColorScale:(unsigned long long)arg1;

@end
