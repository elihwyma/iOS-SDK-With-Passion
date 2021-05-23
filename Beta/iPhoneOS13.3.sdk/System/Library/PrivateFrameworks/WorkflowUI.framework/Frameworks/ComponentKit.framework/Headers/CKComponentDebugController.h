/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@interface CKComponentDebugController : NSObject

+ (_Bool)debugMode;
+ (void)setDebugMode:(_Bool)arg1;
+ (void)registerReflowListener:(id)arg1;
+ (void)reflowComponents;

@end
