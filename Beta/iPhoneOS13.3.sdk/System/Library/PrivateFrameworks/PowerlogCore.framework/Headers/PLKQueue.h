/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface PLKQueue : NSObject

{
    _Bool _enabled;
    int _kQueue;
    int _fileDescriptor;
    struct __CFRunLoopSource *_kqueueDescriptorSource;
    struct __CFFileDescriptor *_kqueueDescriptorRef;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _kQueueBlock;
}

@property int kQueue;
@property int fileDescriptor;
@property struct __CFRunLoopSource *kqueueDescriptorSource;
@property struct __CFFileDescriptor *kqueueDescriptorRef;
@property (copy) NSString *path;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType kQueueBlock;
@property (nonatomic) _Bool enabled;

- (id)initWithPath:(id)arg1 withDispatchQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;

@end
