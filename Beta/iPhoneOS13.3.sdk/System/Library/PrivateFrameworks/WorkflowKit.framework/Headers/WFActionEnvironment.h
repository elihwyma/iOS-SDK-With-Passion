/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@interface WFActionEnvironment : NSObject

@property (nonatomic, readonly) _Bool isMemoryConstrained;
@property (nonatomic, readonly) _Bool isWatchOS;
@property (nonatomic, readonly) _Bool isAppExtension;

+ (id)currentEnvironment;
+ (id)environmentForWorkflowType:(id)arg1;

@end
