/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSString;

@interface WFBundledIntentHandlerProvider : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *localExtensionIdentifier;

+ (id)sharedInstance;
+ (id)localIntentHandlerLaunchID;

- (id)init;
- (id)handlerForIntent:(id)arg1;

@end
