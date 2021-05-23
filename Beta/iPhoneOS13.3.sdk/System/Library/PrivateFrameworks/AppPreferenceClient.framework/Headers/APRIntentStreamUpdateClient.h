/*
 Image: /System/Library/PrivateFrameworks/AppPreferenceClient.framework/AppPreferenceClient
 */

#import <NSObject.h>

@class NSXPCConnection;

@interface APRIntentStreamUpdateClient : NSObject

{
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)notifyAboutIntentStreamChangeWithReply:(CDUnknownBlockType)arg1;

@end
