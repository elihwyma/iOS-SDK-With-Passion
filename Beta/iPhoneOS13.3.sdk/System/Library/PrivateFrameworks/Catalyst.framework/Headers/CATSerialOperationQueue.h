/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATOperationQueue.h>

@class NSOperation;

@interface CATSerialOperationQueue : CATOperationQueue

{
    NSOperation *mLastOperation;
}

- (id)init;
- (id)debugDescription;
- (void)addOperation:(id)arg1;

@end
