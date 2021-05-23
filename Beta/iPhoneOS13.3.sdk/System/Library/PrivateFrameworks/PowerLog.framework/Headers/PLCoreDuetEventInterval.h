/*
 Image: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface PLCoreDuetEventInterval : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;

- (id)description;
- (_Bool)intersects:(id)arg1;
- (id)joinWithInterval:(id)arg1;

@end
