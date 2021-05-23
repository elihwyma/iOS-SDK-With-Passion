/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSNotificationCenter;

@protocol AVTBlockScheduler, AVTCoreDataCloudKitMirroringHandlerDelegate, AVTUILogger, NSObject;

@interface AVTCoreDataCloudKitMirroringHandler : NSObject

{
    _Bool _exportInFlight;
    id <AVTCoreDataCloudKitMirroringHandlerDelegate> _delegate;
    id <AVTUILogger> _logger;
    id <AVTBlockScheduler> _blockScheduler;
    id <NSObject> _willResetNotificationToken;
    id <NSObject> _didResetNotificationToken;
    NSNotificationCenter *_notificationCenter;
}

@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) id <AVTBlockScheduler> blockScheduler;
@property (retain, nonatomic) id <NSObject> willResetNotificationToken;
@property (retain, nonatomic) id <NSObject> didResetNotificationToken;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (nonatomic) _Bool exportInFlight;
@property (weak, nonatomic) id <AVTCoreDataCloudKitMirroringHandlerDelegate> delegate;

- (void)dealloc;
- (void)willResetSync:(id)arg1;
- (void)didResetSync:(id)arg1;
- (void)exportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startObservingResetSyncWithNotificationCenter:(id)arg1;
- (void)scheduleExportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)importChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resetZoneWithManagedObjectContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithLogger:(id)arg1 blockScheduler:(id)arg2;

@end
