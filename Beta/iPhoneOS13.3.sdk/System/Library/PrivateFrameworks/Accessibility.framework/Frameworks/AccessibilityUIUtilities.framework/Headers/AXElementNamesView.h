/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <AccessibilityUIUtilities/AXCyclingView.h>

@class AXElementNamesStyleProvider, NSArray, NSMutableArray, NSObject;

@protocol OS_os_log;

@interface AXElementNamesView : AXCyclingView

{
    _Bool _didUpdateItems;
    NSArray *_items;
    NSObject<OS_os_log> *_loggingFacility;
    AXElementNamesStyleProvider *_styleProvider;
    NSMutableArray *_containers;
    struct CGRect _boundsForLastReload;
}

@property (nonatomic) struct CGRect boundsForLastReload;
@property (nonatomic) _Bool didUpdateItems;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSObject<OS_os_log> *loggingFacility;
@property (retain, nonatomic) AXElementNamesStyleProvider *styleProvider;
@property (nonatomic, readonly) NSMutableArray *containers;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_reloadViews;
- (void)_arrangeNameViews:(id)arg1 withinContainer:(id)arg2;
- (void)_adjustLabelPositionForView:(id)arg1 toAvoidCollidingWithView:(id)arg2;
- (id)viewsInCycle;

@end
