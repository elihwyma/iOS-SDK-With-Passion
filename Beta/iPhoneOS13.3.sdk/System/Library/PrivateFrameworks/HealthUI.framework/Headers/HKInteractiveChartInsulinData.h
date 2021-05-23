/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HKInteractiveChartInsulinData : NSObject

{
    double _basalValue;
    double _totalValue;
}

@property (nonatomic) double basalValue;
@property (nonatomic, readonly) double bolusValue;
@property (nonatomic) double totalValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
