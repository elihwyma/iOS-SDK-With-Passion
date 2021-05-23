/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol DKExtensionAttributes, OS_dispatch_queue;

@interface DKExtensionAdapter : NSObject

{
    id <DKExtensionAttributes> _extensionAttributes;
    NSMutableDictionary *_requestLookup;
    NSMutableDictionary *_extensionToRequestIdentifierLookup;
    NSObject<OS_dispatch_queue> *_adapterQueue;
    NSObject<OS_dispatch_queue> *_adapterConnectQueue;
}

@property (retain, nonatomic) NSMutableDictionary *requestLookup;
@property (retain, nonatomic) NSMutableDictionary *extensionToRequestIdentifierLookup;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *adapterQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *adapterConnectQueue;
@property (nonatomic, readonly) id <DKExtensionAttributes> extensionAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)extensionAdapterWithExtensionAttributes:(id)arg1;

- (void)cancelAll;
- (void)beginRequest:(id)arg1 payload:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_attachHandlersToExtension:(id)arg1;
- (id)initWithExtensionAttributes:(id)arg1;
- (void)_didCompleteExtensionRequest:(id)arg1;
- (void)_didCancelExtensionRequest:(id)arg1 error:(id)arg2;
- (void)_didInterruptExtensionRequest:(id)arg1;
- (id)_requestForExtensionRequestIdentifier:(id)arg1;
- (void)request:(id)arg1 didCompleteWithPayload:(id)arg2 error:(id)arg3;

@end
