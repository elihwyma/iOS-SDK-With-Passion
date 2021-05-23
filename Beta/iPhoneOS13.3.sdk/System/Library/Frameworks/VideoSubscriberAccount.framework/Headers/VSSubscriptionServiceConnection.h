/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface VSSubscriptionServiceConnection : NSObject

{
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void)dealloc;
- (id)serviceWithErrorHandler:(CDUnknownBlockType)arg1;

@end
