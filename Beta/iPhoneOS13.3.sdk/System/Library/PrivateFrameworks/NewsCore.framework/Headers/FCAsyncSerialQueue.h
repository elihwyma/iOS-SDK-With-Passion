/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface FCAsyncSerialQueue : NSObject

{
    NSOperationQueue *_serialOperationQueue;
}

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (nonatomic) _Bool suspended;
@property (nonatomic, readonly) NSOperationQueue *underlyingOperationQueue;

- (id)init;
- (id)initWithQualityOfService:(long long)arg1;
- (void)enqueueOperation:(id)arg1;
- (void)enqueueBlock:(CDUnknownBlockType)arg1;
- (void)enqueueBlockForMainThread:(CDUnknownBlockType)arg1;
- (void)withQualityOfService:(long long)arg1 enqueueBlockForMainThread:(CDUnknownBlockType)arg2;
- (void)cancelAllBlocks;

@end
