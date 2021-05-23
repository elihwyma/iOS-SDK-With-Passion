/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSXPCConnection, TKSmartCardSlotEngine;

__attribute__((visibility("hidden")))
@interface TKSmartCardSessionEngine : NSObject

{
    TKSmartCardSlotEngine *_slot;
    _Bool _transmitting;
    _Bool _valid;
    _Bool _active;
    long long _endPolicy;
    NSXPCConnection *_connection;
}

@property _Bool valid;
@property _Bool active;
@property long long endPolicy;
@property (weak, nonatomic, readonly) NSXPCConnection *connection;

- (void)dealloc;
- (void)transmit:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)terminateWithReply:(CDUnknownBlockType)arg1;
- (void)setSessionEndPolicy:(long long)arg1;
- (id)initWithSlot:(id)arg1 connection:(id)arg2;

@end
