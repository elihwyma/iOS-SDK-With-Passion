/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/_NSBundleODRDataCommon.h>

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _NSBundleODRDataForExtensions : _NSBundleODRDataCommon

{
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)dataForBundle:(id)arg1 createIfRequired:(_Bool)arg2;

- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)accessSandboxExtension:(id)arg1;
- (void)hostApplicationAssetPacksBecameAvailable:(id)arg1;
- (void)hostApplicationAssetPacksBecameUnavailable:(id)arg1;

@end
