/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface _UIActivityResourceLoader : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _loadBlock;
    NSObject<OS_dispatch_group> *_group;
    id _resource;
}

- (id)initWithQueue:(id)arg1 loadBlock:(CDUnknownBlockType)arg2;
- (void)_loadResourceWithBlock:(CDUnknownBlockType)arg1;
- (void)loadResourceIfNeeded;
- (void)_getResourceWithBlock:(CDUnknownBlockType)arg1;
- (void)getResourceWithBlock:(CDUnknownBlockType)arg1;

@end
