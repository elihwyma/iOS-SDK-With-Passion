/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface VSAuthenticationBulletinOperation : VSAsyncOperation

{
    NSURL *_appStoreRoomURL;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic, readonly) NSURL *appStoreRoomURL;

- (id)init;
- (void)executionDidBegin;
- (id)_serviceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithAppStoreRoomURL:(id)arg1;

@end
