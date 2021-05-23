/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionRowView.h>

@class NSLayoutConstraint, NSString, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceTextCell : MKPlaceSectionRowView

{
    _MKUILabel *_label;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (retain, nonatomic) _MKUILabel *label;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (copy, nonatomic) NSString *text;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_contentSizeDidChange;

@end
