/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class MKMapView, NSMutableArray, NSMutableDictionary, NSNumberFormatter, NSString, UIColor, _MKScaleUnitsView;

@interface MKScaleView : UIView

{
    double _distanceInMeters;
    _Bool _useMetric;
    _Bool _useYardsForShortDistances;
    NSNumberFormatter *_floatNumberFormatter;
    double _magicNumbers[3];
    UIColor *_borderColorRegular;
    UIColor *_borderColorSatellite;
    NSMutableArray *_segments;
    NSMutableArray *_blurredSegments;
    _MKScaleUnitsView *_unitsView;
    long long _oldNumberOfSegments;
    UIView *_displayedOutline;
    UIView *_displayedWhiteOutline;
    double _segmentLengthInPixels;
    double _resultSegmentLength;
    double _resultSegmentLengthInMeters;
    NSMutableDictionary *_formattedNumberCache;
    NSString *_feetAbbreviation;
    NSString *_yardAbbreviation;
    NSString *_milesAbbreviation;
    NSString *_metersAbbreviation;
    NSString *_kilometersAbbreviation;
    long long _grQuality;
    int _layoutCounter;
    _Bool _useLightText;
    _Bool _isVisible;
    _Bool _usedInternallyByMapView;
    MKMapView *_mapView;
    long long _scaleVisibility;
    long long _legendAlignment;
    unsigned long long _mapType;
}

@property (nonatomic) _Bool useLightText;
@property (nonatomic) double distanceInMeters;
@property (nonatomic) _Bool usedInternallyByMapView;
@property (nonatomic) unsigned long long mapType;
@property (weak, nonatomic) MKMapView *mapView;
@property (nonatomic) long long scaleVisibility;
@property (nonatomic) long long legendAlignment;

+ (id)scaleViewWithMapView:(id)arg1;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)_systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)_updateVisibility;
- (void)_updateStrings;
- (id)initWithMapView:(id)arg1;
- (void)memoryWarning:(id)arg1;
- (void)updateLocale:(id)arg1;
- (id)_setupOutlineView;
- (void)shouldUpdateScaleNotification:(id)arg1;
- (id)_setupSegmentView:(_Bool)arg1;
- (void)_localizedDistanceStringsWithMeters:(unsigned int)arg1 imperial:(double)arg2 useFeet:(_Bool)arg3 inMetric:(_Bool)arg4 displaysYardsForShortDistances:(_Bool)arg5 strings:(id)arg6;
- (void)_calculateSegments;
- (id)_formattedStringForFloat:(double)arg1;
- (id)_scaleViewFormattedStringForFloat:(double)arg1;
- (id)_scaleViewFormattedStringForInteger:(long long)arg1;

@end
