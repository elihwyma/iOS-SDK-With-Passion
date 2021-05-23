/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol FBSynchronizedTransactionDelegate;

@protocol FBSynchronizedTransaction <Swift>

@property (weak, nonatomic) id <FBSynchronizedTransactionDelegate> synchronizationDelegate;

- (unsigned short)performSynchronizedCommit;
- (unsigned short)isReadyForSynchronizedCommit;

@end
