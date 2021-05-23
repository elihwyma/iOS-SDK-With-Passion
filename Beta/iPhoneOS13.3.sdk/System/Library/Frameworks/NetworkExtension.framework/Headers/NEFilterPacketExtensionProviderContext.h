/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFilterExtensionProviderContext.h>

@class NSMutableDictionary, NSObject;

@protocol OS_nw_interpose;

@interface NEFilterPacketExtensionProviderContext : NEFilterExtensionProviderContext

{
    struct os_unfair_lock_s _lock;
    NSObject<OS_nw_interpose> *_nw_interpose;
    NSMutableDictionary *_interposes;
}

@property (retain) NSObject<OS_nw_interpose> *nw_interpose;
@property (retain) NSMutableDictionary *interposes;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (id)extensionPoint;
- (void)stopWithReason:(int)arg1;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)interposeHandleFlowEvent:(int)arg1 interface:(id)arg2 flow_id:(unsigned char [16])arg3 nexus_instance:(unsigned char [16])arg4 nexus_port:(unsigned int)arg5 key:(void *)arg6 key_length:(unsigned int)arg7;
- (_Bool)interposeClaimWithUUID:(id)arg1;

@end
