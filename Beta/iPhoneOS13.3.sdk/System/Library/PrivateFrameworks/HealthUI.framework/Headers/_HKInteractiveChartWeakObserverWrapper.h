/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@protocol HKInteractiveChartViewObserver;

@interface _HKInteractiveChartWeakObserverWrapper : NSObject

{
    id <HKInteractiveChartViewObserver> _observer;
}

@property (weak, nonatomic, readonly) id <HKInteractiveChartViewObserver> observer;

- (id)initWithObserver:(id)arg1;

@end
