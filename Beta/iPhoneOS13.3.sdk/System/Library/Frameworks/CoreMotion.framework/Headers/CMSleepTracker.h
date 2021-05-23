/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMSpringTrackerInternal;

@interface CMSleepTracker : NSObject

{
    CMSpringTrackerInternal *_internal;
}

@property (nonatomic, readonly) CMSpringTrackerInternal *_internal;

+ (_Bool)isAvailable;

- (id)init;
- (void)dealloc;
- (void)startWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)isTracking;
- (void)stopWithHandler:(CDUnknownBlockType)arg1;
- (void)querySleepDataFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
