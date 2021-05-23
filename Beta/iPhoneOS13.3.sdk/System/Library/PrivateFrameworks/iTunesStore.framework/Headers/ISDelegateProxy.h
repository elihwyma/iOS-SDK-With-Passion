/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSLock;

@interface ISDelegateProxy : NSObject

{
    id _delegate;
    NSLock *_lock;
    _Bool _shouldMessageMainThread;
}

- (id)init;
- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldMessageMainThread:(_Bool)arg1;
- (void)sendInvocationToDelegate:(id)arg1;

@end
