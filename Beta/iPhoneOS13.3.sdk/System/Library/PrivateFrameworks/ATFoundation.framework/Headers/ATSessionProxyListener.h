/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

#import <Foundation/NSObject.h>

@class ATSession, NSMutableArray, NSString, NSXPCListener;

@protocol OS_dispatch_queue;

@interface ATSessionProxyListener : NSObject

{
    NSXPCListener *_listener;
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    ATSession *_session;
}

@property (nonatomic, readonly) ATSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)stop;
- (void)start;
- (id)initWithSession:(id)arg1;
- (void)sessionDidFinish:(id)arg1;

@end
