/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionRowView.h>

@class NSArray, NSMutableArray, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface _MKPlaceBusinessInfoRow : MKPlaceSectionRowView

{
    _Bool _needToRecalculateWidth;
    unsigned long long _numberOfColumns;
    NSMutableArray *_labels;
    NSArray *_constraints;
    UILayoutGuide *_leftColumnGuide;
    UILayoutGuide *_rightColumnGuide;
    double _width;
    NSArray *_items;
}

@property (retain, nonatomic) NSArray *items;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_createConstraints;
- (void)_contentSizeDidChange;
- (void)infoCardThemeChanged;
- (void)_updateFontAndTextColor:(id)arg1;

@end
