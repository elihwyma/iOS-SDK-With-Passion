/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

@class NSString;

@interface PLAssetsdNotificationService : PLAbstractLibraryServicesManagerService

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)userViewedNotificationWithAlbumCloudGUID:(id)arg1;
- (void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1;
- (void)noteInterestingMemoryAlertWithMemoryUUID:(id)arg1 notificationDeliveryDate:(id)arg2;
- (void)noteInterestingMemoryAlertViewedWithUUID:(id)arg1;
- (void)respondToPhotoStreamInvitationWithAlbumCloudGUID:(id)arg1 acceptInvitation:(_Bool)arg2;
- (void)noteSuggestedCMMAlertWithCMMUUID:(id)arg1 notificationDeliveryDate:(id)arg2;
- (void)noteSuggestedCMMAlertViewedWithCMMUUID:(id)arg1;
- (void)noteGoingToExpireCMMsAlertWithCMMUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;

@end
