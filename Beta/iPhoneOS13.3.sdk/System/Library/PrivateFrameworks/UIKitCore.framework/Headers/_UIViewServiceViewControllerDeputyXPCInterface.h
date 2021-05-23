/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _UIViewServiceViewControllerDeputyXPCInterface : NSObject

{
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteViewControllerInterface;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)interfaceWithExportedInterface:(id)arg1 remoteViewControllerInterface:(id)arg2;

- (id)exportedInterface;
- (id)connectionInvocation;
- (id)hostObjectInterface;
- (SEL)connectionSelector;
- (id)connectionProtocol;

@end
