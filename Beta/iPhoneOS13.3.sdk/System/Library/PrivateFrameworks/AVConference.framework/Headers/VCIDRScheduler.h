/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCIDRScheduler : NSObject

{
    NSMutableDictionary *_schedulerGroups;
    NSMutableArray *_schedulerItems;
    NSArray *_streams;
    unsigned int _basePeriodMs;
    unsigned int _framesPerBasePeriod;
    unsigned int _captureFramerate;
}

@property (nonatomic, readonly) unsigned int basePeriodMs;
@property (nonatomic, readonly) unsigned int captureFramerate;

+ (unsigned int)computeGcdForX:(unsigned int)arg1 y:(unsigned int)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithStreams:(id)arg1 captureFramerate:(unsigned int)arg2;
- (void)computeBasePeriod;
- (_Bool)computeCaptureFramerate;
- (void)computeGroupList;
- (void)computeSchedulerItemList;
- (void)computeSchedulerItemsBudget;
- (void)computeSchedulerItemsPosition;
- (void)computeStreamsIDRPosition;
- (void)realignStreams;
- (void)placeRemainingItems:(id)arg1 placedItems:(id)arg2 leftItem:(id)arg3 rightItem:(id)arg4;

@end
