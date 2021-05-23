/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSExtensionContext.h>

#import <NetworkExtension/Swift-Protocol.h>

@class NEUserNotification, NSData, NSString, NSUUID, NSXPCConnection;

@protocol NEExtensionProviderHostDelegate, NEExtensionProviderProtocol;

@interface NEExtensionProviderHostContext : NSExtensionContext <Swift>

{
    id <NEExtensionProviderProtocol> _vendorContext;
    NSString *_description;
    NEUserNotification *_notification;
    _Bool _stopped;
    id <NEExtensionProviderHostDelegate> _delegate;
    NSXPCConnection *_vendorConnection;
}

@property (nonatomic) _Bool stopped;
@property (nonatomic, readonly) NSXPCConnection *vendorConnection;
@property (weak) id <NEExtensionProviderHostDelegate> delegate;
@property (readonly) int pid;
@property (readonly) NSUUID *uuid;
@property (readonly) NSData *auditTokenData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)setDescription:(id)arg1;
- (void)dispose;
- (void)sleepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)wake;
- (void)startWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2;
- (void)stopWithReason:(int)arg1;
- (void)startedWithError:(id)arg1;
- (void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)vendorContext;
- (id)initWithVendorEndpoint:(id)arg1 delegate:(id)arg2;
- (id)copyValueForEntitlement:(id)arg1;

@end
