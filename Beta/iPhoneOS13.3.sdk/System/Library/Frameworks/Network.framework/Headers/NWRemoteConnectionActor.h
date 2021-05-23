/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol NWRemoteConnectionActorDelegate;

@interface NWRemoteConnectionActor : NSObject

{
    NSObject<NWRemoteConnectionActorDelegate> *_delegate;
    NSMutableDictionary *_connections;
    NSMutableDictionary *_browsers;
}

@property (weak) NSObject<NWRemoteConnectionActorDelegate> *delegate;
@property (retain) NSMutableDictionary *connections;
@property (retain) NSMutableDictionary *browsers;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithDelegate:(id)arg1;
- (void)updatePathForConnection:(id)arg1;
- (void)sendData:(id)arg1 forConnection:(id)arg2;
- (void)updateEndpointsForBrowser:(id)arg1;
- (void)scheduleReadsOnConnection:(id)arg1;
- (_Bool)receiveRemoteCommand:(id)arg1;

@end
