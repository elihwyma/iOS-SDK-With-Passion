/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class TPSOperationQueue;

@interface TPSOperationQueueCountObserver : NSObject

{
    CDUnknownBlockType _completionBlock;
    unsigned long long _lastOperationCount;
    TPSOperationQueue *_operationQueue;
}

@property (nonatomic) unsigned long long lastOperationCount;
@property (weak, nonatomic) TPSOperationQueue *operationQueue;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithQueue:(id)arg1;

@end
