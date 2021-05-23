/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@interface WFParameterValueRegistry : NSObject

+ (void)initialize;
+ (void)registerValueClass:(Class)arg1;
+ (id)registeredValueClasses;
+ (void)createRegisteredValueClassesSet;
+ (void)rediscoverParameterValueClassesIfNeeded;
+ (id)allParameterValueClassesInWorkflowKit;

@end
