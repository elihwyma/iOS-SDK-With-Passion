/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKTaskScheduler : NSObject

- (void)cancelAllTasks;
- (struct NSString *)scheduleTask:(CDUnknownBlockType)arg1 identifier:(id)arg2;
- (void)cancelTaskForToken:(struct NSString *)arg1;

@end
