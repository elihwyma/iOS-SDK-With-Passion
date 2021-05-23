/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface WebNetworkStateObserver : NSObject

{
    CDUnknownBlockType block;
}

- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)networkStateChanged:(id)arg1;

@end
