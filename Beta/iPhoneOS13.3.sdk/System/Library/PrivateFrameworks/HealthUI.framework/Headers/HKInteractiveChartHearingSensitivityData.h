/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HKInteractiveChartHearingSensitivityData : NSObject

{
    _Bool _isLeftEar;
    _Bool _isAverage;
    double _sensitivityDbHL;
}

@property (nonatomic) double sensitivityDbHL;
@property (nonatomic) _Bool isLeftEar;
@property (nonatomic) _Bool isAverage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
