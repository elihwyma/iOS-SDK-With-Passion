/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface AVCallbackContextRegistry : NSObject

{
    NSMutableDictionary *_contextsForTokens;
    unsigned long long _currentToken;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
}

+ (void)initialize;
+ (id)sharedCallbackContextRegistry;

- (id)init;
- (void)dealloc;
- (void *)registerCallbackContextObject:(id)arg1;
- (void)unregisterCallbackContextForToken:(void *)arg1;
- (id)callbackContextForToken:(void *)arg1;

@end
