/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableSet, NSString, NSURL;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PKApplicationRegistry : NSObject

{
    NSMutableSet *_registeredBundleIdentifiers;
    NSURL *_archiveFileURL;
    NSObject<OS_dispatch_semaphore> *_archiveSemaphore;
    NSObject<OS_dispatch_queue> *_applicationRegistryQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)applicationsDidUninstall:(id)arg1;
- (id)initWithArchiveFileURL:(id)arg1;
- (_Bool)applicationIsRegisteredWithBundleIdentifier:(id)arg1;
- (_Bool)registerApplicationWithBundleIdentifier:(id)arg1;
- (void)_validateRegisteredApplications;
- (void)_requestArchiveToDisk;

@end
