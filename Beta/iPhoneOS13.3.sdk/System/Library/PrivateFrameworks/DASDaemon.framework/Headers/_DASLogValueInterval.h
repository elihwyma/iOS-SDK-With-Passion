/*
 Image: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface _DASLogValueInterval : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    NSObject *_value;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSObject *value;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (double)duration;
- (id)durationString;
- (id)intervalString;

@end
