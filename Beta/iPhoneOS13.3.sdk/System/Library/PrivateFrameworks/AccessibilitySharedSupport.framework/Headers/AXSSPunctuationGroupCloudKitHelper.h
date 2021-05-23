/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <AccessibilitySharedSupport/AXSSCloudKitHelper.h>

@class AXDispatchTimer;

@interface AXSSPunctuationGroupCloudKitHelper : AXSSCloudKitHelper

{
    AXDispatchTimer *_changeCoalescer;
}

- (void)dealloc;
- (id)recordType;
- (id)apsEnvironment;
- (void)beginWatchingForChanges;
- (id)testRecordForSchemaCreation:(id)arg1;
- (Class)managedObjectClass;
- (void)processServerUpdateChanges:(id)arg1 moc:(id)arg2 recordNameToManagedObject:(id)arg3;
- (void)clearRecordsForPurging:(id)arg1;
- (void)retrieveLocalChangesForCloud:(CDUnknownBlockType)arg1;
- (id)createCKRecordFromObject:(id)arg1;
- (id)createCKRecordFromGroup:(id)arg1;
- (void)punctuationGroupsChanged:(id)arg1;

@end
