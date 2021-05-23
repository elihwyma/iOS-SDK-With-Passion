/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@interface EKStatsOperation : NSObject

{
    int _type;
    long long _intValue;
    double _doubleValue;
}

@property int type;
@property long long intValue;
@property double doubleValue;

- (id)initWithType:(int)arg1 doubleValue:(double)arg2;
- (id)initWithType:(int)arg1 intValue:(long long)arg2;

@end
