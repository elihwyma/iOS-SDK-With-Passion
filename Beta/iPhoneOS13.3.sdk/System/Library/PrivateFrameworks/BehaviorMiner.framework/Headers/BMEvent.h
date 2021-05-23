/*
 Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

#import <Foundation/NSObject.h>

@class BMItem, NSDate;

@interface BMEvent : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    BMItem *_item;
}

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property (retain) BMItem *item;

- (id)description;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 item:(id)arg3;

@end
