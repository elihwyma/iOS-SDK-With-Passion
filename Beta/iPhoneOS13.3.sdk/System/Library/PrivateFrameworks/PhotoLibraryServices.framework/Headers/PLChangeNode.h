/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, PLCoreDataChangeMerger, PLDelayedSaveActionsProcessor, PLLibraryServicesManager, PLUpdatedOrderKeys;

@protocol PLChangePublisher;

@interface PLChangeNode : NSObject

{
    NSURL *_libraryUrl;
    PLLibraryServicesManager *_libraryServicesManager;
    unsigned char _nodeUUID[16];
    NSString *_nodeUUIDShortString;
    PLUpdatedOrderKeys *_updatedOrderKeys;
    PLCoreDataChangeMerger *_changeMerger;
    id <PLChangePublisher> _changePublisher;
    PLDelayedSaveActionsProcessor *_delayedSaveActionsProcessor;
}

- (void)dealloc;
- (id)photoLibrary;
- (id)initWithLibraryURL:(id)arg1 changeMerger:(id)arg2 changePublisher:(id)arg3 libraryServicesManager:(id)arg4;
- (void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (_Bool)_isInvalidRemoteChangeEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)distributeRemoteContextDidSaveEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3;
- (void)connectManagedObjectContext:(id)arg1;
- (void)disconnectManagedObjectContext:(id)arg1;
- (void)publishChangesForDidSaveObjectIDsNotification:(id)arg1;

@end
