/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableArray, NSString, NSXPCConnection;

@protocol RemoteProcessingBlockRegistrarHosting;

__attribute__((visibility("hidden")))
@interface RPBClientManager : NSObject

{
    NSXPCConnection *mRegistrarConnection;
    id <RemoteProcessingBlockRegistrarHosting> mProxyInterface;
    NSMutableArray *mRemoteServers;
    NSHashTable *mClients;
    NSMutableArray *mPropertyListeners;
    _Atomic unsigned int mRPBServerCounter;
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
- (int)addClient:(id)arg1;
- (int)removeClient:(id)arg1;
- (void)processingBlock:(unsigned int)arg1 propertyChanged:(unsigned int)arg2;
- (void)processingBlock:(unsigned int)arg1 propertiesChanged:(id)arg2;
- (void)newServerAdded:(id)arg1;
- (void)startRegistarConnection;
- (int)addPropertyListener:(id)arg1 inPropertyID:(unsigned int)arg2 inServerID:(unsigned int)arg3 inRPBlockID:(unsigned int)arg4;
- (int)removePropertyListener:(id)arg1 inPropertyID:(unsigned int)arg2 inServerID:(unsigned int)arg3 inRPBlockID:(unsigned int)arg4;
- (int)copyProperty:(unsigned int)arg1 inServerID:(unsigned int)arg2 inRPBlockID:(unsigned int)arg3 outData:(id *)arg4;
- (int)setProperty:(unsigned int)arg1 inServerID:(unsigned int)arg2 inRPBlockID:(unsigned int)arg3 inData:(id)arg4;
- (int)copyItemProperty:(unsigned int)arg1 inServerID:(unsigned int)arg2 inRPBlockID:(unsigned int)arg3 inItemID:(unsigned int)arg4 inScope:(unsigned int)arg5 inElement:(unsigned int)arg6 outData:(id *)arg7;
- (int)setItemProperty:(unsigned int)arg1 inServerID:(unsigned int)arg2 inRPBlockID:(unsigned int)arg3 inItemID:(unsigned int)arg4 inScope:(unsigned int)arg5 inElement:(unsigned int)arg6 inData:(id)arg7;
- (int)getItemParameter:(unsigned int)arg1 inServerID:(unsigned int)arg2 inRPBlockID:(unsigned int)arg3 inItemID:(unsigned int)arg4 inScope:(unsigned int)arg5 inElement:(unsigned int)arg6 outParameterValue:(float *)arg7;
- (int)setItemParameter:(unsigned int)arg1 inServerID:(unsigned int)arg2 inRPBlockID:(unsigned int)arg3 inItemID:(unsigned int)arg4 inScope:(unsigned int)arg5 inElement:(unsigned int)arg6 inParameterValue:(float)arg7;
- (id)serverFromServerID:(unsigned int)arg1;

@end
