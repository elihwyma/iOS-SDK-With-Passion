/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSNumber;

@protocol OS_dispatch_queue;

@interface SKUIMediaSocialAdminPermissionsCoordinator : NSObject

{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_lastKnownAuthors;
    NSDate *_lastRequestDate;
    NSMutableArray *_resultBlocks;
}

@property (copy, readonly) NSNumber *lastKnownAdminStatus;
@property (copy, readonly) NSArray *lastKnownAuthors;

+ (id)sharedCoordinator;

- (id)init;
- (void)reset;
- (void)getAdminStatusWithOptions:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)getAuthorsWithOptions:(id)arg1 authorsBlock:(CDUnknownBlockType)arg2;
- (void)getAuthorsAndWaitWithOptions:(id)arg1 authorsBlock:(CDUnknownBlockType)arg2;
- (void)_authenticateOnCompletion:(CDUnknownBlockType)arg1;
- (void)_queueResultBlock:(CDUnknownBlockType)arg1;
- (void)_getAuthors;
- (void)_handleOperationResponseWithAuthors:(id)arg1 error:(id)arg2;
- (void)_fireResultsBlocksWithAuthors:(id)arg1 error:(id)arg2;

@end
