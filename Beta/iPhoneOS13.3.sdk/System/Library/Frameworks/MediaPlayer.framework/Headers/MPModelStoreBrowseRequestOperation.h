/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@class NSMapTable, NSObject, NSOperation, NSOperationQueue;

@protocol OS_dispatch_group;

@interface MPModelStoreBrowseRequestOperation : MPStoreModelRequestOperation

{
    _Bool _didInitializeTimeoutIntervalAdditions;
    _Bool _errorReportingDisabled;
    NSOperation *_individualPendingNestedRequestOperation;
    NSObject<OS_dispatch_group> *_nestedRequestOperationsGroup;
    NSOperationQueue *_nestedRequestsOperationQueue;
    unsigned long long _requestType;
    NSMapTable *_sectionsToPendingNestedRequestOperations;
    double _timeoutIntervalAdditions;
}

- (void)cancel;
- (void)execute;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_nestedRequestsOperationQueue;
- (double)adjustTimeoutInterval:(double)arg1;
- (void)_produceCarPlayResponseWithParser:(id)arg1 withNestedRequestsForEmptyBrickSectionsInOperationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_produceRegularResponseWithParser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_produceResponseWithParser:(id)arg1 results:(id)arg2 changeDetails:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
