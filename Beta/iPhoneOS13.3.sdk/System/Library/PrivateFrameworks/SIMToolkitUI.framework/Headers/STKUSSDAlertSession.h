/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <SIMToolkitUI/STKAlertSession.h>

@class NSMutableArray, NSString, NSXPCConnection, NSXPCListener;

@interface STKUSSDAlertSession : STKAlertSession

{
    _Bool _hasReceivedContent;
    long long _event;
    NSXPCListener *_ussdListener;
    NSXPCConnection *_ussdConnection;
    NSMutableArray *_connectionQueue;
}

@property (nonatomic, readonly) NSXPCConnection *ussdConnection;
@property (nonatomic, readonly) NSMutableArray *connectionQueue;
@property (nonatomic, readonly) long long event;
@property (nonatomic, readonly) NSXPCListener *ussdListener;
@property (nonatomic) _Bool hasReceivedContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)wakeup;
- (id)initWithLogger:(id)arg1 responseProvider:(id)arg2 event:(long long)arg3 options:(id)arg4 sound:(id)arg5;
- (void)performUSSDUpdate:(CDUnknownBlockType)arg1;

@end
