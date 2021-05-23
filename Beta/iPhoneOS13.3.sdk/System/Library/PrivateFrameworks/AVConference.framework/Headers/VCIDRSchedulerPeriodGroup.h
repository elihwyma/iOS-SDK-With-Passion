/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCIDRSchedulerPeriodGroup : NSObject

{
    unsigned int _basePeriodCount;
    unsigned int _framesPerBasePeriod;
    NSMutableArray *_streams;
    NSMutableArray *_schedulerItems;
}

@property (nonatomic, readonly) unsigned int basePeriodCount;

- (void)dealloc;
- (id)description;
- (void)addStream:(id)arg1;
- (void)computeStreamsIDRPosition;
- (id)initWithPeriodCount:(unsigned int)arg1 framesPerBasePeriod:(unsigned int)arg2;
- (id)computeScheduleItemList;

@end
