/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface HKAnnotationChartPoint : NSObject

{
    NSDate *_date;
    NSNumber *_value;
    long long _pointType;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSNumber *value;
@property (nonatomic, readonly) long long pointType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)userInfo;
- (id)minYValue;
- (id)maxYValue;
- (id)yValue;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)arg1;
- (id)allYValues;
- (id)initWithPoint:(struct CGPoint)arg1 pointType:(long long)arg2;

@end
