/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFHandleIntentAction.h>

@class INIntent, NSString;

@interface WFHandleDonatedIntentAction : WFHandleIntentAction

{
    _Bool _forceExecutionOnPhone;
    INIntent *_intent;
    NSString *_groupIdentifier;
    NSString *_title;
    NSString *_subtitle;
}

@property (nonatomic, readonly) _Bool forceExecutionOnPhone;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (retain, nonatomic) INIntent *intent;

+ (id)intentActionWithShortcut:(id)arg1 forceExecutionOnPhone:(_Bool)arg2 groupIdentifier:(id)arg3 error:(id *)arg4;

- (id)name;
- (id)localizedName;
- (id)localizedSubtitle;
- (id)appIdentifier;
- (long long)intentCategory;
- (id)intentDescription;
- (id)initWithIntent:(id)arg1;
- (void)initializeParameters;
- (id)localizedDescriptionSummary;
- (id)initWithIntent:(id)arg1 forceExecutionOnPhone:(_Bool)arg2;
- (void)continueInAppWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithInteraction:(id)arg1 forceExecutionOnPhone:(_Bool)arg2;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (id)generatedIntentWithInput:(id)arg1 error:(id *)arg2;
- (id)slots;
- (id)executorWithIntent:(id)arg1 groupIdentifier:(id)arg2;
- (id)localizedKeyParameterDisplayName;
- (id)serializedParameters;
- (id)requiredResources;

@end
