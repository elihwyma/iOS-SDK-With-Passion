/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MTSnapshotScheduler : NSObject

{
    NSString *_bundleID;
}

+ (double)_quiescingWindow;

- (id)initWithBundleID:(id)arg1;
- (void)scheduleSnapshot;
- (void)_performScheduleSnapshot;

@end
