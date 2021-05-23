/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCClientZone, BRCItemID, BRCProgress, CKRecord, CKRecordID, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCUpload : NSObject

{
    BRCClientZone *_clientZone;
    long long _throttleID;
    unsigned long long _totalSize;
    NSString *_stageID;
    _Bool _progressPublished;
    BRCItemID *_itemID;
    CKRecord *_record;
    unsigned long long _doneSize;
    BRCProgress *_progress;
}

@property (nonatomic, readonly) long long throttleID;
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
- (id)description;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2 transferSize:(unsigned long long)arg3;

@end
