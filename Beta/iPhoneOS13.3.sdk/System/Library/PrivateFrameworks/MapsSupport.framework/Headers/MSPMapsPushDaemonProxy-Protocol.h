/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@protocol MSPMapsPushDaemonProxy <Swift>

- (unsigned short)checkin;
- (unsigned short)registerForTopic;
- (unsigned short)simulateProblemResolution;
- (unsigned short)fetchProblemStatus;
- (unsigned short)shouldUseDevAPNS: /* Error: Ran out of types for this method. */;
- (unsigned short)setShouldUseDevAPNS: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchDevicePushToken: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchDownloadedAnnouncements: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAnnouncementsFilePath: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAnnouncementsURLPath: /* Error: Ran out of types for this method. */;
- (unsigned short)updateAnnouncements: /* Error: Ran out of types for this method. */;
- (unsigned short)updateActiveAnnouncement;
- (unsigned short)simulateAnnouncement:afterDelay: /* Error: Ran out of types for this method. */;
- (unsigned short)clearCurrentAnnouncement;
- (unsigned short)clearShownAnnouncements;
- (unsigned short)resetAnnouncements;
- (unsigned short)fetchCurrentAnnouncement: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchShownAnnouncements: /* Error: Ran out of types for this method. */;
- (unsigned short)clearBulletinWithRecordID: /* Error: Ran out of types for this method. */;
- (unsigned short)problemStatusResponseWithNotificationID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeProblemStatusResponseWithNotificationID: /* Error: Ran out of types for this method. */;
- (unsigned short)showTrafficConditionsBulletinWithTitle:message:actionURL: /* Error: Ran out of types for this method. */;
- (unsigned short)clearTrafficConditionsBulletin;
- (unsigned short)showMapsSuggestionsBulletinWithTitle:message:actionURL: /* Error: Ran out of types for this method. */;
- (unsigned short)clearMapsSuggestionsBulletin;
- (unsigned short)showTrafficIncidentAlertWithID:withReroute:title:description: /* Error: Ran out of types for this method. */;
- (unsigned short)clearTrafficIncidentBulletinWithAlertID: /* Error: Ran out of types for this method. */;
- (unsigned short)clearTrafficIncidentsBulletin;
- (unsigned short)showPredictedRouteTrafficIncidentBulletinForCommuteDetails: /* Error: Ran out of types for this method. */;
- (unsigned short)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:afterDelay: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPredictedRouteTrafficIncidentBulletin;
- (unsigned short)showLowFuelAlertBulletinForLowFuelDetails: /* Error: Ran out of types for this method. */;
- (unsigned short)clearLowFuelAlertBulletin;
- (unsigned short)showParkedCarBulletinForEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)showParkedCarBulletinForEvent:afterDelay: /* Error: Ran out of types for this method. */;
- (unsigned short)showParkedCarReplacementBulletinForEvent:replacingEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)showParkedCarReplacementBulletinForEvent:replacingEvent:afterDelay: /* Error: Ran out of types for this method. */;
- (unsigned short)clearParkedCarBulletin;
- (unsigned short)updateMapsModelBackupAttributesIfNeeded;
- (unsigned short)eraseRAPData;
- (unsigned short)handleMapsApplicationRemoval: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchUserRoutingPreferencesWithCompletion: /* Error: Ran out of types for this method. */;

@end
