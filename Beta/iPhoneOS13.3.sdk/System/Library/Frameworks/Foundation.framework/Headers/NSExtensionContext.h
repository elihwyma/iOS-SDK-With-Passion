/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSArray, NSString, NSUUID, NSXPCConnection, NSXPCListener;

@protocol OS_os_transaction, _NSExtensionContextHosting, _NSExtensionContextVending;

@interface NSExtensionContext : NSObject <Swift>

{
    _Bool __dummyExtension;
    NSArray *_inputItems;
    NSUUID *__UUID;
    CDUnknownBlockType __requestCleanUpBlock;
    id <_NSExtensionContextHosting> __extensionHostProxy;
    id <_NSExtensionContextVending> __extensionVendorProxy;
    NSXPCConnection *__auxiliaryConnection;
    NSXPCListener *__auxiliaryListener;
    id __processAssertion;
    id __principalObject;
    NSObject<OS_os_transaction> *__transaction;
    CDStruct_4c969caf __extensionHostAuditToken;
}

@property (copy, nonatomic) NSUUID *_UUID;
@property (copy, nonatomic, setter=_setRequestCleanUpBlock:) CDUnknownBlockType _requestCleanUpBlock;
@property (copy, nonatomic, setter=_setInputItems:) NSArray *inputItems;
@property (retain, setter=_setExtensionHostProxy:) id <_NSExtensionContextHosting> _extensionHostProxy;
@property (retain, nonatomic, setter=_setExtensionVendorProxy:) id <_NSExtensionContextVending> _extensionVendorProxy;
@property (retain, nonatomic, setter=_setAuxiliaryConnection:) NSXPCConnection *_auxiliaryConnection;
@property (retain, nonatomic, setter=_setAuxiliaryListener:) NSXPCListener *_auxiliaryListener;
@property (retain, setter=_setProcessAssertion:) id _processAssertion;
@property (nonatomic, setter=_setPrincipalObject:) id _principalObject;
@property (nonatomic, getter=_isDummyExtension, setter=_setDummyExtension:) _Bool _dummyExtension;
@property (retain, getter=_transaction, setter=_setTransaction:) NSObject<OS_os_transaction> *_transaction;
@property (setter=_setExtensionHostAuditToken:) CDStruct_4c969caf _extensionHostAuditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_allowedErrorClasses;
+ (id)_extensionContextHostProtocolWithAllowedErrorClasses:(id)arg1;
+ (id)_extensionContextVendorProtocolWithAllowedErrorClasses:(id)arg1;
+ (id)_extensionContextForIdentifier:(id)arg1;
+ (id)_extensionContextHostProtocolAllowedClassesForItems;
+ (id)_defaultExtensionContextProtocol;
+ (id)_defaultExtensionContextVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)_willPerformHostCallback:(CDUnknownBlockType)arg1;
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)___nsx_pingHost:(CDUnknownBlockType)arg1;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (id)initWithInputItems:(id)arg1 contextUUID:(id)arg2;
- (id)initWithInputItems:(id)arg1;
- (void)_completeRequestReturningItemsSecondHalf:(CDUnknownBlockType)arg1;
- (_Bool)_isHost;
- (void)didConnectToVendor:(id)arg1;
- (void)completeRequestReturningItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelRequestWithError:(id)arg1;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_loadItemForPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_loadPreviewImageForPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
