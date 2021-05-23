/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKInteractiveChartAnnotationView, NSArray, NSDate, NSMutableArray, UIView;

@protocol HKLollipopDelegate;

@interface HKLollipopController : NSObject

{
    HKInteractiveChartAnnotationView *_annotationView;
    id <HKLollipopDelegate> _delegate;
    UIView *_parentView;
    UIView *_fieldView;
    NSMutableArray *_extensionViews;
    NSArray *_lastSelectionLocation;
    NSDate *_lastFirstLollipopDate;
}

@property (retain, nonatomic) UIView *parentView;
@property (retain, nonatomic) UIView *fieldView;
@property (retain, nonatomic) NSMutableArray *extensionViews;
@property (copy, nonatomic) NSArray *lastSelectionLocation;
@property (retain, nonatomic) NSDate *lastFirstLollipopDate;
@property (nonatomic, readonly) HKInteractiveChartAnnotationView *annotationView;
@property (weak, nonatomic, readonly) id <HKLollipopDelegate> delegate;

+ (_Bool)pointSelectionContextsHaveUserInfo:(id)arg1;

- (_Bool)isVisible;
- (void)_setHidden:(_Bool)arg1;
- (void)_setAlpha:(double)arg1;
- (void)setInvisibleAnimated:(_Bool)arg1;
- (id)_lollipopExtensionColor;
- (_Bool)_selectionHasMoved:(id)arg1;
- (id)_stickLocationsFromPointContexts:(id)arg1;
- (void)_positionAnnotationViewWithStickLocations:(id)arg1;
- (void)_rebuildExtensionsWithStickLocations:(id)arg1;
- (void)_setExtensionViewBackgrounds;
- (double)_lollipopExtensionLength;
- (double)_lollipopExtensionWidth;
- (id)_lollipopFieldColor;
- (id)_lollipopAnnotationColor;
- (void)updateWithPointContexts:(id)arg1;
- (void)_bringViewsToFront;
- (id)initWithAnnotationDataSource:(id)arg1 parentView:(id)arg2 delegate:(id)arg3;
- (void)setVisibleWithRect:(struct CGRect)arg1 pointContexts:(id)arg2 animated:(_Bool)arg3;
- (id)firstLollipopDate;

@end
