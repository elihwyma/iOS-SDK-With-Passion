/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMSkiTrackerInternal;

@interface CMSkiTracker : NSObject

{
    CMSkiTrackerInternal *_internal;
}

@property (nonatomic, readonly) CMSkiTrackerInternal *_internal;

+ (_Bool)isAvailable;

- (id)init;
- (void)dealloc;
- (void)startUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopUpdates;
- (void)querySkiUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
