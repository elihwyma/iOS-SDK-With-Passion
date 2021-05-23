/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFAccessResource.h>

@class NSString;

@interface WFIntentsAccessResource : WFAccessResource

{
    NSString *_associatedAppIdentifier;
}

+ (id)persistentIdentifierFromBundleIdentifier:(id)arg1;
+ (id)bundleIdentifierFromPersistentIdentifier:(id)arg1;
+ (_Bool)isSystemResource;

- (id)initWithDefinition:(id)arg1 persistentIdentifier:(id)arg2;
- (id)initWithBundleIdentifierForDisplay:(id)arg1;
- (unsigned long long)globalLevelStatus;
- (id)localizedWorkflowLevelNotDeterminedStatusMessage;
- (id)localizedWorkflowLevelDeniedStatusMessage;
- (id)localizedWorkflowLevelPromptTemplate;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)associatedAppIdentifier;

@end
