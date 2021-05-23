/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface SSCircularBuffer : NSObject

{
    unsigned long long _maxSize;
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _currentIndex;
    NSMutableArray *_buffer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) NSMutableArray *buffer;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) unsigned long long maxSize;

+ (id)_rearrangeObjects:(id)arg1 forCurrentIndex:(unsigned long long)arg2;

- (id)init;
- (id)description;
- (void)addObject:(id)arg1;
- (id)allObjects;
- (id)flush;
- (id)_flush;
- (id)initWithMaxSize:(unsigned long long)arg1;

@end
