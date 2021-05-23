/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSError, NWEndpoint, NWParameters;

@protocol NWUDPListenerDelegate, OS_nw_listener;

@interface NWUDPListener : NSObject

{
    NWEndpoint *_localEndpoint;
    NSError *_error;
    NSObject<OS_nw_listener> *_internalListener;
    NWParameters *_parameters;
    NWEndpoint *_endpoint;
    id <NWUDPListenerDelegate> _delegate;
}

@property (retain) NSObject<OS_nw_listener> *internalListener;
@property (retain) NWParameters *parameters;
@property (retain) NWEndpoint *endpoint;
@property (weak) id <NWUDPListenerDelegate> delegate;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NWEndpoint *localEndpoint;

- (void)handleError:(id)arg1;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;
- (void)handleConnection:(id)arg1;

@end
