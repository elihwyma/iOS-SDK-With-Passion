/*
 Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

#import <Foundation/NSExtensionContext.h>

@class NSString;

@interface ILMessageFilterExtensionHostContext : NSExtensionContext

{
    CDUnknownBlockType _deferQueryRequestToNetwork;
    CDUnknownBlockType _deferReportRequestToNetwork;
}

@property (copy, nonatomic) CDUnknownBlockType deferQueryRequestToNetwork;
@property (copy, nonatomic) CDUnknownBlockType deferReportRequestToNetwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)finish;
- (oneway void)deferQueryRequestToNetworkWithReply:(CDUnknownBlockType)arg1;
- (oneway void)deferReportRequestToNetworkWithReply:(CDUnknownBlockType)arg1;
- (void)handleQueryRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleReportRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
