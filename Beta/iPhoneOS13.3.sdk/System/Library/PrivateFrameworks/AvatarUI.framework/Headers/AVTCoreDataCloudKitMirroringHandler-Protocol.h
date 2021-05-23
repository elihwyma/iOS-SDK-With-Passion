/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@protocol AVTCoreDataCloudKitMirroringHandlerDelegate;

@protocol AVTCoreDataCloudKitMirroringHandler

@property (weak, nonatomic) id <AVTCoreDataCloudKitMirroringHandlerDelegate> delegate;

- (unsigned short)exportChangesWithManagedObjectContext:workQueue:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)startObservingResetSyncWithNotificationCenter: /* Error: Ran out of types for this method. */;
- (unsigned short)scheduleExportChangesWithManagedObjectContext:workQueue:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)importChangesWithManagedObjectContext:workQueue:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)resetZoneWithManagedObjectContext:completionHandler: /* Error: Ran out of types for this method. */;

@end
