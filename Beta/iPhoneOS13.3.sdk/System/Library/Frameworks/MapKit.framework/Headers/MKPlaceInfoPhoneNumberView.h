/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceInfoContactRowView.h>

@class _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceInfoPhoneNumberView : MKPlaceInfoContactRowView

{
    _MKUILabel *_optsOutOfAdsView;
    _Bool _optsOutOfAds;
}

@property (nonatomic) _Bool optsOutOfAds;

- (id)_icon;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)draggableContent;
- (int)analyticsTarget;
- (id)_valueString;
- (Class)_labeledValueExpectedValueType;
- (id)_iconAccessibilityLabel;

@end
