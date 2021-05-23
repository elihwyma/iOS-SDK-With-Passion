/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <StoreBookkeeper/SBKRequestHandler.h>

@class SBKTransactionController;

__attribute__((visibility("hidden")))
@interface SBKSimpleTransactionRequestHandler : SBKRequestHandler

{
    _Bool _canceled;
    SBKTransactionController *_transactionController;
}

@property (nonatomic, readonly) SBKTransactionController *transactionController;
@property (nonatomic, readonly) _Bool canceled;

- (void)cancel;
- (void)timeout;
- (void)cancelWithError:(id)arg1;
- (id)initWithBagContext:(id)arg1;
- (void)scheduleTransaction:(id)arg1 finishedBlock:(CDUnknownBlockType)arg2;

@end
