/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFCloudKitImporterWorkItem.h>

@class CKRecordZoneID;

__attribute__((visibility("hidden")))
@interface PFCloudKitImporterZonePurgedWorkItem : PFCloudKitImporterWorkItem

{
    CKRecordZoneID *_purgedRecordZoneID;
}

@property (nonatomic, readonly) CKRecordZoneID *purgedRecordZoneID;

- (void)dealloc;
- (id)description;
- (void)doWorkWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPurgedRecordZoneID:(id)arg1 options:(id)arg2 request:(id)arg3;
- (_Bool)wipeAllCloudDataAndPurgeHistoryToken:(_Bool)arg1 error:(id *)arg2;

@end
