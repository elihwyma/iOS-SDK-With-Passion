/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSArray, NSMutableDictionary, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface TKSmartCardSlotManager : NSObject

{
    NSXPCConnection *_connection;
    NSMutableDictionary *_endpoints;
    NSArray *_slotNames;
    NSObject<OS_dispatch_queue> *_slotNamesQueue;
}

@property (readonly) NSArray *slotNames;

+ (id)defaultManager;

- (id)init;
- (id)initWithServer:(id)arg1;
- (void)setSlotWithName:(id)arg1 endpoint:(id)arg2 type:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getSlotWithName:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)slotNamed:(id)arg1;

@end
