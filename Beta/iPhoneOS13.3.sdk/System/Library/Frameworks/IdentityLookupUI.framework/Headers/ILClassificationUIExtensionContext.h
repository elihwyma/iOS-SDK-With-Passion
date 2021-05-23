/*
 Image: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI
 */

#import <Foundation/NSExtensionContext.h>

@class NSString;

@interface ILClassificationUIExtensionContext : NSExtensionContext

{
    _Bool _readyForClassificationResponse;
}

@property (nonatomic, getter=isReadyForClassificationResponse) _Bool readyForClassificationResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)viewController;
- (oneway void)prepareForClassificationRequest:(id)arg1;
- (oneway void)classificationResponseForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
