/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKSleepChartPointUserInfo, NSString;

@interface HKSleepAnnotationViewDataSource : NSObject

{
    HKSleepChartPointUserInfo *_sleepChartPointUserInfo;
}

@property (retain, nonatomic) HKSleepChartPointUserInfo *sleepChartPointUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (_Bool)showSeparators;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (id)_dateGroupWithDate:(id)arg1 orientation:(long long)arg2;
- (id)_dateRowWithDate:(id)arg1;
- (id)_titleBodyGroupWithTitle:(id)arg1 body:(id)arg2 orientation:(long long)arg3;

@end
