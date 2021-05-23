/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetCustomURLAuthentication : NSObject

{
    struct OpaqueFigCustomURLHandler *_handler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)copyKeychainCredentialForUrl:(id)arg1;
+ (int)sendAuthResponse:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2 disposition:(long long)arg3 credential:(id)arg4 authHandler:(struct OpaqueFigCustomURLHandler *)arg5;

- (void)dealloc;
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1;
- (int)_handleAuthChallenge:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2 canHandleRequestOut:(char *)arg3;

@end
