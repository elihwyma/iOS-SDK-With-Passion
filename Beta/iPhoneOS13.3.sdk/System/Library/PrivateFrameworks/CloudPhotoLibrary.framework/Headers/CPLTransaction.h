/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@interface CPLTransaction : NSObject

+ (id)transactions;
+ (unsigned long long)transactionCount;
+ (void)endTransactionWithReason:(id)arg1;
+ (void)beginTransactionWithReason:(id)arg1 keepPower:(_Bool)arg2;

@end
