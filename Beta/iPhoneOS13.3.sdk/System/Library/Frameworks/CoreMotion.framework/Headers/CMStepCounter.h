/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMStepCounterProxy;

@interface CMStepCounter : NSObject

{
    CMStepCounterProxy *_stepcounterProxy;
}

@property (nonatomic, readonly) CMStepCounterProxy *stepcounterProxy;
@property _Bool enabled;

+ (_Bool)isStepCountingAvailable;

- (id)init;
- (void)dealloc;
- (void)queryStepCountStartingFrom:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)startStepCountingUpdatesToQueue:(id)arg1 updateOn:(long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)stopStepCountingUpdates;
- (void)getTotalCountToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)deleteHistory;

@end
