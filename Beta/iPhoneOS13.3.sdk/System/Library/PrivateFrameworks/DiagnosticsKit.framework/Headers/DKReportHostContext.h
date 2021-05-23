/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSExtensionContext.h>

@class NSString;

@protocol DKExtensionHostAdapterDelegate;

@interface DKReportHostContext : NSExtensionContext

{
    id <DKExtensionHostAdapterDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <DKExtensionHostAdapterDelegate> delegate;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)cancelWithCompletion:(CDUnknownBlockType)arg1;
- (void)completeRemoteWithReport:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startWithPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
