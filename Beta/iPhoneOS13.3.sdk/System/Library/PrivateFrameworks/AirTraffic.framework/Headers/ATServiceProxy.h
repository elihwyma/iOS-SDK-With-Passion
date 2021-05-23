/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <AirTraffic/ATService.h>

@class NSString, NSXPCConnection;

@interface ATServiceProxy : ATService

{
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (void)service:(id)arg1 willOpenMessageLink:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)service:(id)arg1 willOpenMessageLink:(id)arg2;
- (id)messageLinks;

@end
