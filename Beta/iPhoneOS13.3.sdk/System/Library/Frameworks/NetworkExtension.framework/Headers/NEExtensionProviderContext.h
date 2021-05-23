/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSExtensionContext.h>

#import <NetworkExtension/Swift-Protocol.h>

@class NEConfiguration, NEProvider, NSObject, NSString, NSXPCConnection;

@protocol NEExtensionProviderHostProtocol, OS_os_transaction;

@interface NEExtensionProviderContext : NSExtensionContext <Swift>

{
    id <NEExtensionProviderHostProtocol> _hostContext;
    NSString *_description;
    _Bool _isDisposed;
    NEConfiguration *_configuration;
    CDUnknownBlockType _stopCompletionHandler;
    NSXPCConnection *_hostConnection;
    NEProvider *_provider;
    NSObject<OS_os_transaction> *_transaction;
}

@property (copy) CDUnknownBlockType stopCompletionHandler;
@property (readonly) NSXPCConnection *hostConnection;
@property (nonatomic) _Bool isDisposed;
@property (nonatomic, readonly) NEProvider *provider;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain) NEConfiguration *configuration;
@property (nonatomic, readonly) NSString *extensionPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (id)_principalObject;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithConnection:(id)arg1;
- (void)cancelWithError:(id)arg1;
- (void)setDescription:(id)arg1;
- (id)initWithProvider:(id)arg1;
- (id)hostContext;
- (void)dispose;
- (void)sleepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)wake;
- (void)startWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2;
- (void)stopWithReason:(int)arg1;
- (void)startedWithError:(id)arg1;
- (void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)neStopReasonToProviderStopReason:(int)arg1;
- (void)completeSession;
- (void)dropProvider;

@end
