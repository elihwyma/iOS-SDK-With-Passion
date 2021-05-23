/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@interface WFHomeScreenController : NSObject

+ (_Bool)addWorkflowToHomeScreen:(id)arg1 withName:(id)arg2 icon:(id)arg3 error:(id *)arg4;
+ (void)migrateWebClipsIfNeeded;
+ (id)iconImageForIcon:(id)arg1;
+ (void)drawIcon:(id)arg1 maxSize:(double)arg2 inRect:(struct CGRect)arg3;
+ (id)launchImageForIcon:(id)arg1 inLandscape:(_Bool)arg2;

@end
