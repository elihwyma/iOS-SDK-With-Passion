/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFActionProvider.h>

@interface WFBundledActionProvider : WFActionProvider

- (id)currentVersion;
- (void)updateCache:(CDUnknownBlockType)arg1;
- (id)cacheURL;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)arg1;
- (void)deleteCache;
- (id)cacheDirectoryURL;
- (id)bundledURL;
- (id)createAllAvailableActions;
- (id)actionDefinitionsWithIdentifiers:(id)arg1;

@end
