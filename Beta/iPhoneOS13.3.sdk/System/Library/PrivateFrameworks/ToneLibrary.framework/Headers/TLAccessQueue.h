/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface TLAccessQueue : NSObject

{
    NSString *_threadLocalStorageKey;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_label;
}

@property (nonatomic, readonly) NSString *label;

- (id)initWithLabel:(id)arg1 appendUUIDToLabel:(_Bool)arg2;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;
- (void)assertNotRunningInAccessQueue;
- (void)_performSynchronousBlockInSerialQueue:(CDUnknownBlockType)arg1;
- (void)performAsynchronousBlock:(CDUnknownBlockType)arg1;

@end
