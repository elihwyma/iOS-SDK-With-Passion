/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMSwimTrackerInternal;

@interface CMSwimTracker : NSObject

{
    CMSwimTrackerInternal *_internal;
}

@property (nonatomic, readonly) CMSwimTrackerInternal *_internal;

+ (_Bool)isAvailable;
+ (unsigned long long)maxSwimDataEntries;

- (id)init;
- (void)dealloc;
- (void)startUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopUpdates;
- (void)querySwimUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
