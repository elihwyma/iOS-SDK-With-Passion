/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CKDDecryptRecordsOperationInfo : CKDatabaseOperationInfo

{
    NSDictionary *_webSharingIdentityDataByRecordID;
}

@property (retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID;

@end
