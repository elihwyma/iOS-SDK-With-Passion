/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/ICApp.h>

@class LSApplicationProxy;

@interface ICApp (LaunchServices)

@property (nonatomic, readonly) LSApplicationProxy *applicationProxy;

+ (id)appWithIdentifier:(id)arg1 name:(id)arg2;

- (id)initWithApplicationProxy:(id)arg1;

@end
