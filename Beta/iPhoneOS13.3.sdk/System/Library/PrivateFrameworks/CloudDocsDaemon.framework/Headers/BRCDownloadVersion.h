/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCDownload.h>

@class BRCClientZone, BRCProgress, CKRecord, CKRecordID, GSPermanentStorage, NSError, NSNumber;

__attribute__((visibility("hidden")))
@interface BRCDownloadVersion : BRCDownload

{
    CKRecordID *_secondaryRecordID;
    CKRecord *_secondaryRecord;
    BRCClientZone *_clientZone;
    _Bool _sharedZone;
    _Bool _isLoser;
    GSPermanentStorage *_storage;
    NSError *_gsError;
    NSNumber *_docID;
}

@property (nonatomic, readonly) GSPermanentStorage *storage;
@property (retain, nonatomic) BRCProgress *progress;
@property (nonatomic, readonly) NSError *gsError;
@property (nonatomic, readonly) _Bool isLoser;
@property (nonatomic, readonly) NSNumber *docID;

- (id)description;
- (int)kind;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2 etag:(id)arg3 isLoser:(_Bool)arg4;
- (id)secondaryRecordID;
- (id)secondaryRecord;
- (void)setSecondaryRecord:(id)arg1;
- (id)_stageContentWithSession:(id)arg1 error:(id *)arg2;
- (id)_stageWithSession:(id)arg1 creationInfo:(id *)arg2 error:(id *)arg3;

@end
