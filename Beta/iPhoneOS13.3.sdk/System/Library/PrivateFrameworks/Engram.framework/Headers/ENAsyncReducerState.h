/*
 Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

#import <NSObject.h>

@class CUTResult, NSArray;

@interface ENAsyncReducerState : NSObject

{
    NSArray *_visitedItems;
    NSArray *_pendingItems;
    id _currentItem;
    CUTResult *_currentResult;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _continueBlock;
    CDUnknownBlockType _stopBlock;
}

@property (retain, nonatomic) NSArray *visitedItems;
@property (retain, nonatomic) NSArray *pendingItems;
@property (retain, nonatomic) id currentItem;
@property (retain, nonatomic) CUTResult *currentResult;
@property (copy, nonatomic) CDUnknownBlockType cancelBlock;
@property (copy, nonatomic) CDUnknownBlockType continueBlock;
@property (copy, nonatomic) CDUnknownBlockType stopBlock;

- (void)continueWithResult:(id)arg1;
- (void)cancelWithError:(id)arg1;
- (void)stopWithResult:(id)arg1;

@end
