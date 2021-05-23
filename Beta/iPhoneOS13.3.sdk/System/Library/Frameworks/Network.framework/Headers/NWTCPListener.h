/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSError, NSString, NWEndpoint, NWParameters;

@protocol NWTCPListenerDelegate, OS_nw_listener;

@interface NWTCPListener : NSObject

{
    NWEndpoint *_localEndpoint;
    NSError *_error;
    NSObject<OS_nw_listener> *_internalListener;
    NWParameters *_parameters;
    NWEndpoint *_endpoint;
    NSString *_launchdKey;
    id <NWTCPListenerDelegate> _delegate;
}

@property (retain) NSObject<OS_nw_listener> *internalListener;
@property (retain) NWParameters *parameters;
@property (retain) NWEndpoint *endpoint;
@property (retain) NSString *launchdKey;
@property (weak) id <NWTCPListenerDelegate> delegate;
@property (retain) NSError *error;
@property (retain) NWEndpoint *localEndpoint;

- (void)handleError:(id)arg1;
- (void)cancel;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;
- (void)startInternal;
- (void)handleNewConnection:(id)arg1;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2 launchdKey:(id)arg3 bonjourEndpoint:(id)arg4;
- (id)initWithLaunchdKey:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (id)initWithBonjourServiceEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;

@end
