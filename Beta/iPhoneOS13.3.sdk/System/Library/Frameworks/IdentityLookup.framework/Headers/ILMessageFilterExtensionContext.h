/*
 Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

#import <Foundation/NSExtensionContext.h>

@class NSString;

@interface ILMessageFilterExtensionContext : NSExtensionContext

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (oneway void)finish;
- (id)extension;
- (oneway void)handleQueryRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)handleReportRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)deferQueryRequestToNetworkWithCompletion:(CDUnknownBlockType)arg1;
- (void)deferReportRequestToNetworkWithCompletion:(CDUnknownBlockType)arg1;

@end
