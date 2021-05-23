/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDFetchRecordsOperation.h>

@class CKRecord;

__attribute__((visibility("hidden")))
@interface CKDGetUserRecordOperation : CKDFetchRecordsOperation

{
    CKRecord *_userRecord;
}

@property (retain, nonatomic) CKRecord *userRecord;

- (void)main;
- (id)analyticsPayload;
- (void)fetchRecordsWithIDs:(id)arg1 andFullRecords:(id)arg2;

@end
