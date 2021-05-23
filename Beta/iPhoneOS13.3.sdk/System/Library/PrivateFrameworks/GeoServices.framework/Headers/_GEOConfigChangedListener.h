/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class _GEOConfigKeyHelper;

@protocol GEOConfigChangeListenerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOConfigChangedListener : NSObject

{
    _GEOConfigKeyHelper *keyHelper;
    NSObject<OS_dispatch_queue> *queue;
    CDUnknownBlockType block;
    id <GEOConfigChangeListenerDelegate> delegate;
}

@property (weak, nonatomic) _GEOConfigKeyHelper *keyHelper;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CDUnknownBlockType block;
@property (weak, nonatomic) id <GEOConfigChangeListenerDelegate> delegate;

+ (id)listenerForKeyHelper:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)listenerForKeyHelper:(id)arg1 queue:(id)arg2 delegate:(id)arg3;

- (id)description;
- (void)callListener;

@end
