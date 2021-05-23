/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKAnnotationDisplayType, HKInteractiveChartViewController, NSString;

@interface HKAnnotationOverlayManager : NSObject

{
    HKInteractiveChartViewController *_chartViewController;
    HKAnnotationDisplayType *_currentOverlayDisplayType;
}

@property (nonatomic, readonly) HKInteractiveChartViewController *chartViewController;
@property (retain, nonatomic) HKAnnotationDisplayType *currentOverlayDisplayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (void)removeAnnotationOverlay;
- (id)initWithInteractiveChart:(id)arg1;
- (void)installAnnotationOverlayForRange:(id)arg1 trendData:(id)arg2;

@end
