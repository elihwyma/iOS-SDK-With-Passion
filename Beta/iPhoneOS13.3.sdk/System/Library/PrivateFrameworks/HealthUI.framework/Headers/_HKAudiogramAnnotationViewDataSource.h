/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKInteractiveChartDataFormatter, NSMutableArray, NSString;

@interface _HKAudiogramAnnotationViewDataSource : NSObject

{
    HKInteractiveChartDataFormatter *_formatter;
    NSMutableArray *_keyValuePairs;
}

@property (nonatomic, readonly) HKInteractiveChartDataFormatter *formatter;
@property (retain, nonatomic) NSMutableArray *keyValuePairs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (_Bool)showSeparators;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (id)initWithFormatter:(id)arg1;
- (void)updateWithPointSelectionContexts:(id)arg1;

@end
