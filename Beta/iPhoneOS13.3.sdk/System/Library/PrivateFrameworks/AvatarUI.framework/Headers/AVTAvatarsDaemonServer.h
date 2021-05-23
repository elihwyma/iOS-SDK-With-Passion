/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCListener;

@protocol AVTAvatarsDaemonServerDelegate, AVTUILogger;

@interface AVTAvatarsDaemonServer : NSObject

{
    id <AVTAvatarsDaemonServerDelegate> delegate;
    NSXPCListener *_listener;
    id <AVTUILogger> _logger;
}

@property (nonatomic, readonly) NSXPCListener *listener;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <AVTAvatarsDaemonServerDelegate> delegate;

- (void)checkIn;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)startListening;
- (id)initWithLogger:(id)arg1;
- (id)initWithListener:(id)arg1 logger:(id)arg2;

@end
