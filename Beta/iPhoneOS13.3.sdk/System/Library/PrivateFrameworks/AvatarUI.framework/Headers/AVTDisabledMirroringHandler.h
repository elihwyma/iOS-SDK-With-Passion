/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@protocol AVTCoreDataCloudKitMirroringHandlerDelegate;

@interface AVTDisabledMirroringHandler : NSObject

@property (weak, nonatomic) id <AVTCoreDataCloudKitMirroringHandlerDelegate> delegate;

- (void)exportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startObservingResetSyncWithNotificationCenter:(id)arg1;
- (void)scheduleExportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)importChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resetZoneWithManagedObjectContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scheduleImportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
