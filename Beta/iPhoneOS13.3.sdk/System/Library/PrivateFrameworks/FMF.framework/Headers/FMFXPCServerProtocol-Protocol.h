/*
 Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

#import <FMF/Swift-Protocol.h>

@protocol FMFXPCServerProtocol <Swift>

- (unsigned short)stopSharingMyLocationWithHandles:groupId:callerId:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)sendFriendshipOfferToHandles:groupId:callerId:endDate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setActiveDevice:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isMyLocationEnabled: /* Error: Ran out of types for this method. */;
- (unsigned short)includeDeviceInAutomations: /* Error: Ran out of types for this method. */;
- (unsigned short)deviceSharingLocation: /* Error: Ran out of types for this method. */;
- (unsigned short)allDevices: /* Error: Ran out of types for this method. */;
- (unsigned short)getMaxLocatingInterval: /* Error: Ran out of types for this method. */;
- (unsigned short)removeDevice:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getPrettyNameForHandle:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getRecordIdForHandle:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)showRestrictedAlert;
- (unsigned short)setExpiredInitTimestamp;
- (unsigned short)sendIDSMessage:toIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)showShareMyLocationiCloudSettingsOffAlert;
- (unsigned short)fetchLocationForHandle:callerId:priority:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchLocationForHandles:callerId:priority:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)locationForHandle:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)showNetworkOfflineDuringOfferAlert;
- (unsigned short)showGenericErrorAlert;
- (unsigned short)showActiveDeviceChangedAlert;
- (unsigned short)isNetworkReachable: /* Error: Ran out of types for this method. */;
- (unsigned short)getHandlesSharingLocationsWithMe: /* Error: Ran out of types for this method. */;
- (unsigned short)getHandlesSharingLocationsWithMeWithGroupId:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getHandlesSharingMyLocation: /* Error: Ran out of types for this method. */;
- (unsigned short)getHandlesSharingMyLocationWithGroupId:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setHideMyLocationEnabled:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setAllowFriendRequestsEnabled:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isAllowFriendRequestsEnabled: /* Error: Ran out of types for this method. */;
- (unsigned short)getAccountEmailAddress: /* Error: Ran out of types for this method. */;
- (unsigned short)canShareLocationWithHandle:groupId:callerId:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)canGetLocationForHandle:groupId:callerId:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getPendingMappingPacketsForHandle:groupId:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getOfferExpirationForHandle:groupId:callerId:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getHandlesWithPendingOffers: /* Error: Ran out of types for this method. */;
- (unsigned short)canOfferToHandles:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)contactForPayload:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)handleAndLocationForPayload:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)dataForPayload:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)decryptPayload:withToken:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)encryptPayload:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)favoritesForMaxCount:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)nearbyLocationsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getAllLocations: /* Error: Ran out of types for this method. */;
- (unsigned short)getFavoritesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)addFavorite:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeFavorite:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)show5XXDuringStartOfferAlert;
- (unsigned short)showSwitchMeDeviceAlertUsingCurrentMeDeviceName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)extendFriendshipOfferToHandle:groupId:callerId:endDate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)sendFriendshipInviteToHandle:groupId:callerId:endDate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)approveFriendshipRequest:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)declineFriendshipRequest:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)stopSharingMyLocationWithHandle:groupId:callerId:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)showNetworkOfflineDuringStopOfferAlert;
- (unsigned short)show5XXDuringStopOfferAlert;
- (unsigned short)getPendingFriendshipRequestsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)addFence:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteFence:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getFences: /* Error: Ran out of types for this method. */;
- (unsigned short)fencesForHandles:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)triggerWithUUID:forFenceWithID:withStatus:forDate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)addFriendHandles: /* Error: Ran out of types for this method. */;
- (unsigned short)removeFriendHandles: /* Error: Ran out of types for this method. */;
- (unsigned short)getCurrentTrackedHandles: /* Error: Ran out of types for this method. */;
- (unsigned short)importMappingPacket:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateMappingPackets:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)forceRefresh;
- (unsigned short)sessionWasCreatedRefresh;
- (unsigned short)showMaxFollowersLimitReachedAlert;
- (unsigned short)showLocationServicesSwitchOffAlert;
- (unsigned short)showShareMyLocationSystemServiceOffAlert;
- (unsigned short)showForbiddenRegionAlert;
- (unsigned short)notLoggedIntoiCloudAlert;
- (unsigned short)upselliCloudAlert;
- (unsigned short)showAirDropImportAlertForId: /* Error: Ran out of types for this method. */;
- (unsigned short)showAirDropImportErrorAlert;

@end
