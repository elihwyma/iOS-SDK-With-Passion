/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSExtensionContext.h>

#import <AudioToolboxCore/Swift-Protocol.h>

@class AUAudioUnit, NSExtension, NSObject, NSUUID, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface AUHostExtensionContext : NSExtensionContext <Swift>

{
    NSObject<OS_dispatch_queue> *mParameterQueue;
    NSExtension *_extension;
    NSUUID *_requestIdentifier;
    AUAudioUnit *_audioUnit;
}

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) NSUUID *requestIdentifier;
@property (weak, nonatomic) AUAudioUnit *audioUnit;
@property (weak, nonatomic, readonly) NSXPCConnection *xpcConnection;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;
- (void)propertiesChanged:(id)arg1;
- (void)MIDICIProfileChanged:(unsigned char)arg1 channel:(unsigned char)arg2 profile:(id)arg3 enabled:(_Bool)arg4;

@end
