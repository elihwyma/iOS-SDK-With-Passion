/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/BCCloudKitTransaction.h>

@class NSString;

@interface BCCloudKitDataChangedTransaction : BCCloudKitTransaction

{
    NSString *_notificationName;
}

@property (copy, nonatomic) NSString *notificationName;

+ (id)transactionNameForEntityName:(id)arg1;

- (void)performWorkWithCompletion:(CDUnknownBlockType)arg1;
- (double)coalescingDelay;
- (id)initWithEntityName:(id)arg1 notificationName:(id)arg2 delegate:(id)arg3;

@end
