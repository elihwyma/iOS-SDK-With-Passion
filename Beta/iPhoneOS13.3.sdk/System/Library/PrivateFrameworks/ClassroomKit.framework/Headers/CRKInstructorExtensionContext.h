/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSExtensionContext.h>

@class NSString, NSXPCListener;

@interface CRKInstructorExtensionContext : NSExtensionContext

{
    NSXPCListener *mListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)listenerEndpointWithCompletion:(CDUnknownBlockType)arg1;

@end
