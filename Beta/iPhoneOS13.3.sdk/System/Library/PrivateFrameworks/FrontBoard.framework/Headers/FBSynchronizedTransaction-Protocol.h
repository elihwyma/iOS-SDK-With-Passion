/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/Swift-Protocol.h>

@protocol FBSynchronizedTransactionDelegate;

@protocol FBSynchronizedTransaction <Swift>

@property (weak, nonatomic) id <FBSynchronizedTransactionDelegate> synchronizationDelegate;

- (unsigned short)performSynchronizedCommit;
- (unsigned short)isReadyForSynchronizedCommit;

@end
