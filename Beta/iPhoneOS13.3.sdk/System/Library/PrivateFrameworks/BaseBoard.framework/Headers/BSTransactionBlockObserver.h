/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface BSTransactionBlockObserver : NSObject

{
    NSMutableArray *_willBeginBlocks;
    NSMutableArray *_didBeginBlocks;
    NSMutableArray *_didFinishWorkBlocks;
    NSMutableArray *_didCompleteBlocks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)transactionWillBegin:(id)arg1;
- (void)transactionDidBegin:(id)arg1;
- (void)transactionDidFinishWork:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (void)addTransactionWillBeginBlock:(CDUnknownBlockType)arg1;
- (void)addTransactionDidBeginBlock:(CDUnknownBlockType)arg1;
- (void)addTransactionDidFinishWorkBlock:(CDUnknownBlockType)arg1;
- (void)addTransactionDidCompleteBlock:(CDUnknownBlockType)arg1;

@end
