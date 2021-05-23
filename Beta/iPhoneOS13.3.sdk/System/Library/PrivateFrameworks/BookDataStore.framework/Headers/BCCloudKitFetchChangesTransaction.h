/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/BCCloudKitTransaction.h>

@class BCCloudKitController;

@interface BCCloudKitFetchChangesTransaction : BCCloudKitTransaction

{
    BCCloudKitController *_cloudKitController;
}

@property (weak, nonatomic) BCCloudKitController *cloudKitController;

+ (id)transactionNameForEntityName:(id)arg1;

- (id)initWithCloudKitController:(id)arg1 delegate:(id)arg2;
- (void)performWorkWithCompletion:(CDUnknownBlockType)arg1;
- (double)coalescingDelay;
- (double)transactionLifetimeTimout;

@end
