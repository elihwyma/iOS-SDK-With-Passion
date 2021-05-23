/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSExtensionContext.h>

@class NSString;

@interface DKReporterContext : NSExtensionContext

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)startRemoteReportWithComponentIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)completeWithReport:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
