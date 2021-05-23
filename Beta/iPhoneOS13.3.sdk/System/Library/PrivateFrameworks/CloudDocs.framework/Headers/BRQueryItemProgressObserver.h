/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class BRQueryItem, NSProgress;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRQueryItemProgressObserver : NSObject

{
    BRQueryItem *_item;
    NSObject<OS_dispatch_queue> *_queue;
    id _subscriber;
    NSProgress *_progress;
    _Bool _started;
    _Bool _isUpload;
    CDUnknownBlockType _progressHandler;
}

@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (nonatomic, readonly) BRQueryItem *item;

- (void)dealloc;
- (id)description;
- (void)setQueue:(id)arg1;
- (void)stop;
- (void)start;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithItem:(id)arg1;
- (void)_stopObserving;
- (void)_subscribe;

@end
