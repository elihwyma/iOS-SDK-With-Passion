/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFAction.h>

@class NSData, NSString, NSUserActivity;

@interface WFOpenUserActivityAction : WFAction

{
    NSUserActivity *_userActivity;
    NSString *_launchOrigin;
    NSData *_activityData;
    NSData *_activityImageData;
    NSString *_activitySubtitle;
    NSString *_bundleIdentifier;
}

@property (copy, nonatomic, readonly) NSData *activityData;
@property (copy, nonatomic, readonly) NSData *activityImageData;
@property (copy, nonatomic, readonly) NSString *activitySubtitle;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (copy, nonatomic) NSString *launchOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)userActivityActionWithShortcut:(id)arg1 launchOrigin:(id)arg2 error:(id *)arg3;
+ (void)createActionWithUserActivity:(id)arg1 appBundleIdentifier:(id)arg2 launchOrigin:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)createActionWithIntent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (id)name;
- (id)localizedName;
- (id)localizedSubtitle;
- (id)appIdentifier;
- (void)generateShortcutRepresentation:(CDUnknownBlockType)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (id)serializedParameters;

@end
