/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDClientInfo : NSObject

{
    NSString *_cachedHostname;
    NSObject<OS_dispatch_queue> *_hostCallbackQueue;
    struct MGNotificationTokenStruct *_hostNotificationToken;
}

@property (nonatomic, readonly) NSString *hostname;

+ (id)sharedClientInfo;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)_refreshHostname;

@end
