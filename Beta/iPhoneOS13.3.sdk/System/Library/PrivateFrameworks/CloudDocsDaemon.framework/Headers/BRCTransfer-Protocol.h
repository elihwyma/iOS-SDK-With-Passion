/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCItemID, BRCProgress, CKRecord, CKRecordID, NSNumber, NSString;

@protocol BRCTransfer

@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, readonly) CKRecordID *secondaryRecordID;
@property (nonatomic, readonly) BRCItemID *itemID;
@property (nonatomic, readonly) NSString *stageID;
@property (nonatomic, readonly) NSNumber *transferID;
@property (nonatomic, readonly) NSString *etag;
@property (nonatomic, readonly) unsigned long long totalSize;
@property (nonatomic, readonly) BRCProgress *progress;
@property (nonatomic) _Bool progressPublished;
@property (nonatomic) unsigned long long doneSize;
@property (retain, nonatomic) CKRecord *record;
@property (retain, nonatomic) CKRecord *secondaryRecord;

@end
