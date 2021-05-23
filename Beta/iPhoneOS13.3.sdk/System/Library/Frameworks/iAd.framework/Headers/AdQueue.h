/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface AdQueue : NSObject

{
    NSMutableArray *_array;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

@property (retain, nonatomic) NSMutableArray *array;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;

- (id)init;
- (unsigned long long)count;
- (id)dequeue;
- (void)enqueue:(id)arg1;

@end
