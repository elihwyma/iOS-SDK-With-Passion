/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class WFDatabase;

@interface WFTriggerManager : NSObject

{
    WFDatabase *_database;
}

@property (nonatomic, readonly) WFDatabase *database;

- (id)initWithDatabase:(id)arg1;
- (id)allConfiguredTriggers;
- (void)saveNewConfiguredTrigger:(id)arg1 workflow:(id)arg2 notifyDaemon:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveNewConfiguredTrigger:(id)arg1 workflowReference:(id)arg2 notifyDaemon:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateConfiguredTrigger:(id)arg1 triggerID:(id)arg2 notifyDaemon:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteTriggerWithIdentifier:(id)arg1 notifyDaemon:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)configuredTriggerWithID:(id)arg1;

@end
