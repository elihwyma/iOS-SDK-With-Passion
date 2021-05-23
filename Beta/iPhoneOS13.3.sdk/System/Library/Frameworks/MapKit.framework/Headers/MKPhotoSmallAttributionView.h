/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPhotoSmallAttributionView : UIView

{
    _MKUILabel *_label;
    UIView *_backgroundView;
    struct CGSize _labelSize;
}

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithMapItem:(id)arg1;
- (id)attributionFont;

@end
