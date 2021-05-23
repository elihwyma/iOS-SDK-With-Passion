/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class CALayer, MKMapView, NSString;

@protocol MKInfoCardTheme;

@interface UIView (MapKitExtras)

@property (retain, nonatomic, readonly) CALayer *_mapkit_currentLayer;
@property (retain, nonatomic, readonly) MKMapView *_mapKit_mapView;
@property (nonatomic, readonly) struct CGRect _mapkit_doubleFrame;
@property (nonatomic, readonly) double _currentScreenScale;
@property (nonatomic, readonly) _Bool _mapkit_isDarkModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <MKInfoCardTheme> mk_theme;

+ (void)_mapkit_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)_mapkit_shouldAdoptImplicitAnimationParameters;
+ (id)_mapkit_currentAnimationTimingFunction;
+ (double)_mapkit_currentAnimationDuration;
+ (void)_mapkit_animateFromCurrentStateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_maps_setDoesNotTranslateAutoresizingConstraintsForViewsDictionary:(id)arg1;

- (void)_mapkit_setBackgroundColor:(id)arg1;
- (void)infoCardThemeChanged;
- (void)_mapkit_setNeedsUpdateConstraints;
- (void)_mapkit_layoutIfNeeded;
- (struct CGRect)_mapkit_translateRect:(struct CGRect)arg1 ifNeededFromSingleEdge:(unsigned long long)arg2;
- (id)_findNearestViewController;
- (unsigned long long)_mapkit_countOfSet:(id)arg1 minusSubset:(id)arg2;
- (void)_mapkit_insertSubview:(id)arg1 atIndex:(long long)arg2;
- (struct UIEdgeInsets)_mapkit_userInterfaceOnlySafeAreaInsets;
- (double)_mapkit_leadingMargin;
- (double)_mapkit_trailingMargin;
- (void)_mapkit_setNeedsLayout;
- (id)_mapkit_constraintsPinningSubviewToBounds:(id)arg1;
- (void)_mapkit_layoutBelowIfNeeded;
- (void)_mapKit_setNeedsDisplay;
- (void)_mapkit_setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
- (void)_mapkit_insertSubviewAboveAllOtherSubviews:(id)arg1;
- (struct CGSize)_mapkit_fittingSize;
- (void)_mapkit_setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (double)_mapkit_YCoordinateAtDistance:(double)arg1 inDirection:(long long)arg2 fromYCoordinate:(double)arg3;
- (double)_mapkit_YCoordinateAtDistance:(double)arg1 inDirection:(long long)arg2 fromEdge:(long long)arg3;
- (void)_mapkit_updateConstraintsIfNeeded;
- (_Bool)_mapkit_isRTL;
- (void)_mapkit_insertSubviewBelowAllOtherSubviews:(id)arg1;
- (void)_mapkit_sizeToFit;
- (struct CGSize)_mapkit_sizeThatFits:(struct CGSize)arg1;
- (float)_mapkit_contentCompressionResistancePriorityForAxis:(long long)arg1;
- (float)_mapkit_contentHuggingPriorityForAxis:(long long)arg1;
- (_Bool)_mapkit_isDescendantOfView:(id)arg1;
- (struct CGRect)_mapkit_rectWithSize:(struct CGSize)arg1 XCoordinate:(double)arg2 atDistance:(double)arg3 inDirection:(long long)arg4 fromEdge:(long long)arg5;
- (_Bool)_mapkit_YCoordinate:(double)arg1 liesInDirection:(long long)arg2 startingFromYCoordinate:(double)arg3;
- (id)_mapkit_accessoryControlToExtendWithCallout;

@end
