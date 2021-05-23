/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLLazyObject : NSObject

{
    _Bool _shouldRetryBlockOnNil;
    struct os_unfair_lock_s _lock;
    CDUnknownBlockType _block;
    id _object;
}

@property (readonly) id objectValue;

- (id)init;
- (void)invalidate;
- (id)initWithObject:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)invalidateWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithRetriableBlock:(CDUnknownBlockType)arg1;
- (id)initWithRetry:(_Bool)arg1 block:(CDUnknownBlockType)arg2;

@end
