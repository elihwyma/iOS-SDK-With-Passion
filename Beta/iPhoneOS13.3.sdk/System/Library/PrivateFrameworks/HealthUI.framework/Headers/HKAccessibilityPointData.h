/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface HKAccessibilityPointData : NSObject

{
    double _horizontalScreenCoordinate;
    NSString *_horizontalTimeCoordinate;
    NSDate *_horizontalDate;
    NSArray *_values;
}

@property (nonatomic, readonly) double horizontalScreenCoordinate;
@property (nonatomic, readonly) NSString *horizontalTimeCoordinate;
@property (nonatomic, readonly) NSDate *horizontalDate;
@property (nonatomic, readonly) NSArray *values;

- (id)description;
- (id)initWithHorizontalScreenCoordinate:(double)arg1 horizontalTimeCoordinate:(id)arg2 horizontalDate:(id)arg3 values:(id)arg4;

@end
