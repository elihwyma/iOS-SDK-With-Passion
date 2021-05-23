/*
 Image: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI
 */

#import <Foundation/NSExtensionContext.h>

@class NSObject, NSString;

@protocol ILClassificationUIExtensionHostContextDelegate, OS_dispatch_queue;

@interface ILClassificationUIExtensionHostContext : NSExtensionContext

{
    id <ILClassificationUIExtensionHostContextDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (weak, nonatomic) id <ILClassificationUIExtensionHostContextDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (oneway void)setReadyForClassificationResponse:(_Bool)arg1;
- (void)prepareForClassificationRequest:(id)arg1;
- (void)classificationResponseForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
