/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

#import <HealthUI/Swift-Protocol.h>

@class NSNumber, NSString;

@interface HKAudiogramChartPoint : NSObject <Swift>

{
    _Bool _isLeftEar;
    _Bool _isAverage;
    NSNumber *_xValue;
    NSNumber *_yValue;
}

@property (nonatomic, readonly) NSNumber *xValue;
@property (nonatomic, readonly) NSNumber *yValue;
@property (nonatomic) _Bool isLeftEar;
@property (nonatomic) _Bool isAverage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)axisValueFromFrequency:(double)arg1;
+ (double)frequencyFromAxisValue:(double)arg1;
+ (id)quantityFromAxisValue:(double)arg1;

- (id)userInfo;
- (id)minYValue;
- (id)maxYValue;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)arg1;
- (id)allYValues;
- (id)initWithFrequency:(double)arg1 sensitivity:(double)arg2 isLeftEar:(_Bool)arg3 isAverage:(_Bool)arg4;
- (id)initWithXValue:(double)arg1 sensitivity:(double)arg2 isLeftEar:(_Bool)arg3 isAverage:(_Bool)arg4;

@end
