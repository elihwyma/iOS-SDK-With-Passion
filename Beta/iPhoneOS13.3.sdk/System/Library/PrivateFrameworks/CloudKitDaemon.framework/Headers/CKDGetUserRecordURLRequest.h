/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecord;

__attribute__((visibility("hidden")))
@interface CKDGetUserRecordURLRequest : CKDURLRequest

{
    CDUnknownBlockType _recordFetchedBlock;
    CKRecord *_userRecord;
}

@property (retain, nonatomic) CKRecord *userRecord;
@property (copy, nonatomic) CDUnknownBlockType recordFetchedBlock;

- (int)operationType;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;

@end
