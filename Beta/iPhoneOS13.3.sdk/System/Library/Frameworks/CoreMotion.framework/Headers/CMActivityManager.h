/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CMActivityManager : NSObject

{
    id _internal;
}

@property (copy) CDUnknownBlockType activityHandler;
@property (nonatomic, readonly, getter=isActivityAvailable) _Bool activityAvailable;

- (id)init;
- (void)dealloc;
- (long long)overrideOscarSideband:(_Bool)arg1 withState:(long long)arg2;
- (long long)simulateMotionState:(_Bool)arg1 withState:(long long)arg2;

@end
