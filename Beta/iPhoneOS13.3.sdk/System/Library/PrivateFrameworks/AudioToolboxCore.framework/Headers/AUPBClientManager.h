/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSXPCConnection;

@protocol AUPBRegistrarHosting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AUPBClientManager : NSObject

{
    NSXPCConnection *mRegistrarConnection;
    id <AUPBRegistrarHosting> mProxyInterface;
    NSMutableArray *mRemoteServers;
    struct vector<PropertyListener, std::__1::allocator<PropertyListener>> mPropertyListeners;
    struct vector<NewServerListener, std::__1::allocator<NewServerListener>> mNewServerListeners;
    unsigned int mServerRefCounter;
    NSObject<OS_dispatch_queue> *mTouchServersQueue;
    int mNotifyToken;
    _Bool mValidToken;
    _Bool mConnectionAcknowledged;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (void)handleRegistrarCrash;
- (struct OpaqueRemoteAudioUnit *)auRefFromHandle:(unsigned int)arg1;
- (unsigned int)auHandleFromRef:(struct OpaqueRemoteAudioUnit *)arg1;
- (void)processingBlock:(unsigned int)arg1 propertiesChanged:(id)arg2 withQualifierData:(id)arg3;
- (void)processingBlock:(unsigned int)arg1 propertyChanged:(unsigned int)arg2;
- (void)newServerAdded:(id)arg1;
- (void)startRegistarConnection;
- (struct OpaqueAUPB *)aupbRefFromHandle:(unsigned int)arg1;
- (id)serverFromRef:(struct OpaqueAUPBServer *)arg1;
- (int)addNewServerListener:(CDUnknownFunctionPointerType)arg1 withUserData:(void *)arg2;
- (int)removeServerListener:(CDUnknownFunctionPointerType)arg1 withUserData:(void *)arg2;
- (int)addPropertyListener:(CDUnknownFunctionPointerType)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 property:(unsigned int)arg4 withUserData:(void *)arg5;
- (int)removePropertyListener:(CDUnknownFunctionPointerType)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 property:(unsigned int)arg4 withUserData:(void *)arg5;
- (int)removePropertyListenersForServer:(struct OpaqueAUPBServer *)arg1;
- (int)copyPBProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 intoValue:(const void **)arg4;
- (int)setPBProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 value:(void *)arg4;
- (int)getAUPropertyInfo:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 intoDataSize:(unsigned int *)arg6 writeable:(char *)arg7;
- (int)getAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 copiedIntoBufer:(void **)arg6 withSize:(unsigned int *)arg7;
- (int)setAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 withValue:(const void *)arg6 size:(unsigned int)arg7;
- (int)getAUParameter:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 copiedIntoValue:(float *)arg6;
- (int)setAUParameter:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 value:(float)arg6;
- (int)getSerialAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 inData:(id *)arg6;
- (int)setSerialAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 toData:(id)arg6;

@end
