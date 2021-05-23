/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class FPXExtensionContext, NSString, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface FPXXPCListenerDelegate : NSObject

{
    FPXExtensionContext *_context;
    NSXPCInterface *_interface;
    id _exportedObject;
    NSString *_serviceName;
}

@property (retain, nonatomic) FPXExtensionContext *context;
@property (retain, nonatomic) NSXPCInterface *interface;
@property (retain, nonatomic) id exportedObject;
@property (copy, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
