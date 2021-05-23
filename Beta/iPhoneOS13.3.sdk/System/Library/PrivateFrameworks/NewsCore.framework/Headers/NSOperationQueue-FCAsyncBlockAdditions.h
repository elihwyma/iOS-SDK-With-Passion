/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSOperationQueue.h>

@interface NSOperationQueue (FCAsyncBlockAdditions)

+ (id)fc_sharedConcurrentQueue;
+ (id)fc_ckRequestOperationQueue;
+ (id)fc_sharedSerialQueue;

- (void)fc_addAsyncOperationWithBlock:(CDUnknownBlockType)arg1;

@end
