/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionRowView.h>

@class NSLayoutConstraint, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceEncyclopedicFactoidView : MKPlaceSectionRowView

{
    NSLayoutConstraint *_baselineToTopConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    NSLayoutConstraint *_baselineToBaselineConstraint;
    _Bool _isStandAlone;
    _MKUILabel *_keyLabel;
    _MKUILabel *_valueLabel;
}

@property (retain, nonatomic) _MKUILabel *keyLabel;
@property (retain, nonatomic) _MKUILabel *valueLabel;

- (void)_contentSizeDidChange;
- (id)_keyLabelWithString:(id)arg1;
- (id)_valueLabelWithString:(id)arg1;
- (void)setUpConstraints;
- (id)_keyLabelFont;
- (id)initWithTextItem:(id)arg1 isStandAloneFactoid:(_Bool)arg2;

@end
