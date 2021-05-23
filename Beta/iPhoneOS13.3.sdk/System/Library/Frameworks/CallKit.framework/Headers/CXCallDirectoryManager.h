/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface CXCallDirectoryManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_defaultConnection;
    NSXPCConnection *_maintenanceConnection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *defaultConnection;
@property (retain, nonatomic) NSXPCConnection *maintenanceConnection;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getExtensionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setPrioritizedExtensionIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setEnabled:(_Bool)arg1 forExtensionWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)defaultConnectionRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)maintenanceConnectionRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)reloadExtensionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)synchronizeExtensionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)compactStoreWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
