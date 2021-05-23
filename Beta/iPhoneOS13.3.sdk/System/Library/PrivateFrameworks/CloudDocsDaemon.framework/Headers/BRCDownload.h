/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCClientZone, BRCItemID, BRCProgress, CKRecord, CKRecordID, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCDownload : NSObject

{
    long long _throttleID;
    unsigned long long _totalSize;
    NSString *_etag;
    BRCItemID *_itemID;
    NSString *_stageID;
    BRCProgress *_progress;
    CKRecord *_record;
    _Bool _progressPublished;
    CKRecordID *_recordID;
    unsigned long long _doneSize;
    BRCClientZone *_clientZone;
}

@property (nonatomic, readonly) int kind;
@property (nonatomic, readonly) BRCClientZone *clientZone;
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

- (void)dealloc;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2;

@end
