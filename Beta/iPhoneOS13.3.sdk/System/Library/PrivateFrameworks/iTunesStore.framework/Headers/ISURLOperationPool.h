/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class ISOperationQueue;

@interface ISURLOperationPool : NSObject

{
    ISOperationQueue *_operationQueue;
}

@property (retain, nonatomic) ISOperationQueue *operationQueue;

- (id)init;
- (void)dealloc;
- (void)cancelOperation:(id)arg1;
- (void)addOperation:(id)arg1 withFlags:(long long)arg2;
- (id)_poolOperationForOperation:(id)arg1 flags:(long long)arg2;

@end
