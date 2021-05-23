/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface PMRStopwatch : NSObject

{
    unsigned long long _startTime;
    NSMutableArray *_splitTimes;
    NSString *_domain;
    NSMutableArray *_splitTimeStack;
    unsigned long long _maxSplitTimes;
    unsigned long long _coreAnimationTotalTime;
}

@property (nonatomic) unsigned long long startTime;
@property unsigned long long coreAnimationTotalTime;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic, readonly) NSArray *splitTimes;
@property (nonatomic) unsigned long long maxSplitTimes;

+ (id)sharedStopwatch;
+ (void)setSharedStopwatch:(id)arg1;
+ (void)benchmarkBlockWithTitle:(id)arg1 iterations:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3 onCompletion:(CDUnknownBlockType)arg4;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)reset;
- (id)initWithDomain:(id)arg1;
- (id)_subtreeDescription;
- (void)_purgeOldestSplitTimeIfNeeded;
- (void)benchmarkBlockWithTitle:(id)arg1 iterations:(unsigned long long)arg2 currentIteration:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4 onCompletion:(CDUnknownBlockType)arg5;
- (id)descriptionWithFormat:(int)arg1 key:(id)arg2 comment:(id)arg3;
- (void)writeToFile:(id)arg1 key:(id)arg2 comment:(id)arg3 fileFormat:(int)arg4;
- (void)addSplit:(id)arg1;
- (void)beginTimingGroupForMethod:(SEL)arg1 inClass:(Class)arg2 comment:(id)arg3;
- (void)endTimingGroup;
- (void)logToLocation:(id)arg1 key:(id)arg2;
- (void)logEvent:(id)arg1 comment:(id)arg2;
- (void)logWithFormat:(int)arg1;

@end
