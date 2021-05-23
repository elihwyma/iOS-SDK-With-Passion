/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSExtensionContext.h>

@class NSObject, NSString;

@protocol CXCallDirectoryProviderHostProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CXCallDirectoryExtensionHostContext : NSExtensionContext

{
    id <CXCallDirectoryProviderHostProtocol> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <CXCallDirectoryProviderHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)activate;
- (oneway void)isIncrementalLoadingAllowed:(CDUnknownBlockType)arg1;
- (oneway void)addBlockingEntriesWithData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)removeBlockingEntriesWithData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)removeAllBlockingEntriesWithReply:(CDUnknownBlockType)arg1;
- (oneway void)addIdentificationEntriesWithData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)removeIdentificationEntriesWithData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)removeAllIdentificationEntriesWithReply:(CDUnknownBlockType)arg1;
- (oneway void)completeRequestWithReply:(CDUnknownBlockType)arg1;
- (void)requestFailedWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
