/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionRowView.h>

@class MKPlaceAttributionCellButton, NSArray, NSLayoutConstraint, _MKUILabel;

@protocol MKPlaceAttributionCellDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceAttributionCell : MKPlaceSectionRowView

{
    NSArray *_visibleConstraints;
    NSLayoutConstraint *_collapsedConstraint;
    _Bool _highlighted;
    _MKUILabel *_label;
    MKPlaceAttributionCellButton *_labelButton;
    NSLayoutConstraint *_labelBaselineToTop;
    NSLayoutConstraint *_labelLastBaselineToBottom;
    id <MKPlaceAttributionCellDelegate> _cellDelegate;
}

@property (retain, nonatomic) _MKUILabel *label;
@property (retain, nonatomic) MKPlaceAttributionCellButton *labelButton;
@property (retain, nonatomic) NSLayoutConstraint *labelBaselineToTop;
@property (retain, nonatomic) NSLayoutConstraint *labelLastBaselineToBottom;
@property (weak, nonatomic) id <MKPlaceAttributionCellDelegate> cellDelegate;

+ (id)fontForLabel;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (double)currentHeight;
- (void)_contentSizeDidChange;
- (void)createConstraints;
- (void)setAttributionString:(id)arg1;
- (void)attributionCellButton:(id)arg1 isHighighted:(_Bool)arg2 executeAction:(_Bool)arg3;
- (void)attributionClicked;

@end
