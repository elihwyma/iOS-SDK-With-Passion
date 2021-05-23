/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@protocol WFDatabaseBackingStore;

@interface WFDatabase : NSObject

{
    NSURL *_fileURL;
    id <WFDatabaseBackingStore> _backingStore;
}

@property (nonatomic, readonly) id <WFDatabaseBackingStore> backingStore;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultDatabase;
+ (void)setDefaultDatabase:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBackingStore:(id)arg1;
- (id)recordWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)recordWithDescriptor:(id)arg1 properties:(id)arg2 error:(id *)arg3;
- (_Bool)saveRecord:(id)arg1 withDescriptor:(id)arg2 error:(id *)arg3;
- (_Bool)reloadRecord:(id)arg1 withDescriptor:(id)arg2 error:(id *)arg3;
- (_Bool)deleteReference:(id)arg1 tombstone:(_Bool)arg2 error:(id *)arg3;
- (id)createWorkflowWithOptions:(id)arg1 error:(id *)arg2;
- (void)deleteAllAccessResourceStateDataForReference:(id)arg1;
- (id)conflictForWorkflowReference:(id)arg1;
- (_Bool)deleteReference:(id)arg1 error:(id *)arg2;
- (id)referenceForWorkflowID:(id)arg1;
- (id)referenceForWorkflowName:(id)arg1;
- (id)createWorkflowWithError:(id *)arg1;
- (id)createWorkflowWithOptions:(id)arg1 nameCollisionBehavior:(unsigned long long)arg2 error:(id *)arg3;
- (id)duplicateReference:(id)arg1 error:(id *)arg2;
- (id)renameReference:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (id)accessResourcesForReference:(id)arg1;
- (id)suggestedWorkflowNameForName:(id)arg1;
- (id)configuredTriggerForTriggerID:(id)arg1;
- (id)validateWorkflowName:(id)arg1 forCreation:(_Bool)arg2 overwriting:(_Bool)arg3 error:(id *)arg4;
- (id)duplicateNameErrorWithName:(id)arg1;

@end
