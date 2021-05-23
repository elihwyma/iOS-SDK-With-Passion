/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface CKFetchShareMetadataOperation : CKOperation

{
    _Bool _shouldFetchRootRecord;
    CDUnknownBlockType _perShareMetadataBlock;
    CDUnknownBlockType _fetchShareMetadataCompletionBlock;
    NSArray *_shareURLs;
    NSArray *_rootRecordDesiredKeys;
    NSMutableDictionary *_errorsByURL;
    NSMutableSet *_packagesToDestroy;
    NSDictionary *_shareInvitationTokensByShareURL;
}

@property (retain, nonatomic) NSMutableDictionary *errorsByURL;
@property (retain, nonatomic) NSMutableSet *packagesToDestroy;
@property (copy, nonatomic) NSDictionary *shareInvitationTokensByShareURL;
@property (copy, nonatomic) NSArray *shareURLs;
@property (nonatomic) _Bool shouldFetchRootRecord;
@property (copy, nonatomic) NSArray *rootRecordDesiredKeys;
@property (copy, nonatomic) CDUnknownBlockType perShareMetadataBlock;
@property (copy, nonatomic) CDUnknownBlockType fetchShareMetadataCompletionBlock;

- (id)init;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (id)initWithShareURLs:(id)arg1;
- (_Bool)claimPackagesInRecord:(id)arg1 error:(id *)arg2;
- (id)initWithShareURLs:(id)arg1 invitationTokensByShareURL:(id)arg2;

@end
