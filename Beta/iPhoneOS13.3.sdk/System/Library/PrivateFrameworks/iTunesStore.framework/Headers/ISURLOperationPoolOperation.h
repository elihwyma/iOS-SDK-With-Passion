/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISURLOperation, NSMutableArray;

@interface ISURLOperationPoolOperation

{
    long long _cancelCount;
    _Bool _forwardImmediately;
    NSMutableArray *_operations;
}

@property (nonatomic, readonly) ISURLOperation *mainOperation;

- (void)dealloc;
- (void)run;
- (void)addOperation:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (_Bool)containsOperation:(id)arg1;
- (void)_forwardResponseFromOperation:(id)arg1 toOperation:(id)arg2;

@end
