/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray, NSString, NSXPCConnection, NSXPCListener;

@protocol RemoteProcessingBlockRegistrarHosting;

__attribute__((visibility("hidden")))
@interface RPBServerManager : NSObject

{
    NSXPCConnection *mRegistrarConnection;
    id <RemoteProcessingBlockRegistrarHosting> mRegistrarProxyInterface;
    NSXPCListener *mListener;
    NSMutableArray *mClientConnections;
    _Atomic unsigned int mRPBIDCounter;
    NSMapTable *mIDToRPBHost;
    int mNotifyToken;
    _Bool mValidToken;
    _Bool mConnectionAcknowledged;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)checkConnectRegistrar;
- (void)startRegistrarConnection;
- (void)getProcessingBlock:(unsigned int)arg1 property:(unsigned int)arg2 intoReply:(CDUnknownBlockType)arg3;
- (void)setProcessingBlock:(unsigned int)arg1 property:(unsigned int)arg2 inData:(id)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)getRPBItem:(unsigned int)arg1 rpbID:(unsigned int)arg2 property:(unsigned int)arg3 onScope:(unsigned int)arg4 element:(unsigned int)arg5 inReply:(CDUnknownBlockType)arg6;
- (void)setRPBItem:(unsigned int)arg1 rpbID:(unsigned int)arg2 property:(unsigned int)arg3 onScope:(unsigned int)arg4 element:(unsigned int)arg5 inData:(id)arg6 withReply:(CDUnknownBlockType)arg7;
- (void)getRPBItem:(unsigned int)arg1 rpbID:(unsigned int)arg2 parameter:(unsigned int)arg3 onScope:(unsigned int)arg4 element:(unsigned int)arg5 inReply:(CDUnknownBlockType)arg6;
- (void)setRPBItem:(unsigned int)arg1 rpbID:(unsigned int)arg2 parameter:(unsigned int)arg3 onScope:(unsigned int)arg4 element:(unsigned int)arg5 value:(float)arg6 withReply:(CDUnknownBlockType)arg7;
- (int)registerRPB:(id)arg1 outRPBlockID:(unsigned int *)arg2;
- (int)unregisterRPB:(unsigned int)arg1;
- (int)registerRPBItem:(unsigned int *)arg1 inRPBlockID:(unsigned int)arg2;
- (int)unregisterRPBItem:(unsigned int)arg1 inRPBlockID:(unsigned int)arg2;
- (int)propertiesChangedOnRPB:(unsigned int)arg1 inPropertyIDs:(id)arg2;
- (int)propertyChangedOnRPB:(unsigned int)arg1 inPropertyID:(unsigned int)arg2;
- (int)propertyChangedOnRPB:(unsigned int)arg1 itemID:(unsigned int)arg2 inPropertyID:(unsigned int)arg3;
- (int)parameterChangedOnRPB:(unsigned int)arg1 itemID:(unsigned int)arg2 inParameterID:(unsigned int)arg3 inParameterValue:(float)arg4;

@end
