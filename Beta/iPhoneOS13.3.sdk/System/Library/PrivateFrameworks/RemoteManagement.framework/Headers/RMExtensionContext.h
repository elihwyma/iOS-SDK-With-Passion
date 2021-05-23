/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <NSExtensionContext.h>

@class NSString;

@interface RMExtensionContext : NSExtensionContext

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)fetchThenApplyConfigurationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queryStatusesOfTypes:(id)arg1 onBehalfOfAccount:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
