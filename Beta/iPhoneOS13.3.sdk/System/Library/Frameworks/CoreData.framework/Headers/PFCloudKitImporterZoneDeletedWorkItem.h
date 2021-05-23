/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFCloudKitImporterWorkItem.h>

@class CKRecordZoneID;

__attribute__((visibility("hidden")))
@interface PFCloudKitImporterZoneDeletedWorkItem : PFCloudKitImporterWorkItem

{
    CKRecordZoneID *_deletedRecordZoneID;
}

@property (nonatomic, readonly) CKRecordZoneID *deletedRecordZoneID;

- (void)dealloc;
- (id)description;
- (void)doWorkWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDeletedRecordZoneID:(id)arg1 options:(id)arg2 request:(id)arg3;

@end
