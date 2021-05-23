/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKDiscoverUserInfosOperation : CKOperation

{
    CDUnknownBlockType _discoverUserInfosCompletionBlock;
    NSArray *_emailAddresses;
    NSArray *_userRecordIDs;
    NSMutableDictionary *_emailsToUserInfos;
    NSMutableDictionary *_userRecordIDsToUserInfos;
}

@property (retain, nonatomic) NSMutableDictionary *emailsToUserInfos;
@property (retain, nonatomic) NSMutableDictionary *userRecordIDsToUserInfos;
@property (copy, nonatomic) NSArray *emailAddresses;
@property (copy, nonatomic) NSArray *userRecordIDs;
@property (copy, nonatomic) CDUnknownBlockType discoverUserInfosCompletionBlock;

- (id)init;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (Class)operationInfoClass;
- (id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2;

@end
