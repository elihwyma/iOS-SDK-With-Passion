/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFActionProvider.h>

@class NSDictionary;

@interface WFIntentActionProvider : WFActionProvider

{
    _Bool _observingInstalledApplicationsChanges;
    NSDictionary *_cachedSchemasByBundleIdentifier;
}

@property (nonatomic, getter=isObservingInstalledApplicationsChanges) _Bool observingInstalledApplicationsChanges;
@property (copy, nonatomic) NSDictionary *cachedSchemasByBundleIdentifier;

+ (void)initialize;

- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)arg1;
- (id)createAllAvailableActions;
- (id)schemasByBundleIdentifier;
- (id)schemaForBundleIdentifier:(id)arg1 ignoreCache:(_Bool)arg2;
- (id)actionIdentifiersForBundleIdentifier:(id)arg1 schema:(id)arg2;
- (_Bool)shouldCreateActionForIntentClassName:(id)arg1 actionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 inSchema:(id)arg4;
- (void)observeInstalledApplicationsChangesIfNeeded;
- (void)installedApplicationsDidChange:(id)arg1;

@end
