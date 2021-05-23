/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSObject.h>

@class ASProtocolCapabilities;

@interface ASProtocol : NSObject

{
    ASProtocolCapabilities *_capabilities;
}

@property (retain, nonatomic) ASProtocolCapabilities *capabilities;

- (id)init;
- (id)initWithVersion:(id)arg1;
- (id)protocolVersion;
- (int)supportsConversations;
- (int)supportsMailboxSearch;
- (int)supportsEmailFlagging;
- (int)supportsDraftFolderSync;
- (_Bool)supportsUniqueServerId;
- (_Bool)supportsAttachments;
- (_Bool)supportsSettingsCommand;
- (_Bool)useSmartMailTasks;
- (_Bool)useEventIdsInMeetingResponse;
- (_Bool)includeCommentInMeetingResponse;
- (_Bool)supportsProposeNewTime;
- (void)_setCapabilitiesVersion:(id)arg1;
- (id)_initWithVersion:(id)arg1 capabilitiesVersion:(id)arg2;
- (id)_requestLinePrefixWithTask:(id)arg1;
- (id)_usernameOnlyPortionOfUserString:(id)arg1;
- (_Bool)supportsItemOperationsCommand;
- (_Bool)serverUpdatesAttendeeStatusOnEvents;
- (id)calendarConstraintsPath;
- (id)addressBookConstraintsPath;
- (_Bool)supportsNoteSyncing;
- (_Bool)supportsFreeBusyLookup;
- (id)initWithCachedVersion:(id)arg1;
- (_Bool)versionChangeRequiresAccountUpgrade:(id)arg1;
- (id)requestURLStringWithTask:(id)arg1;
- (_Bool)headerNeedsUserAgent;
- (_Bool)headerNeedsPolicyKey;
- (_Bool)headerNeedsProtocolVersion;
- (_Bool)commandStringNeedsSaveInSent;
- (_Bool)shouldUseWBXMLProvisioning;
- (_Bool)usesAirSyncBaseNamespace;
- (_Bool)sendAttendeeRole;
- (_Bool)shouldSendClassForFolderItemsSync;
- (_Bool)shouldSendFullContactInfo;
- (_Bool)requiresExplicitlyFalseGetChanges;
- (_Bool)useBooleanFolderItemsSyncDeletesAsMoves;
- (_Bool)sendEmailInWBXML;
- (_Bool)usesTopLevelStatusCodes;
- (_Bool)fetchAttachmentsWithItemOperations;
- (_Bool)allAttachmentsAreBase64ed;
- (_Bool)sendCalendarInfoInRecurrence;
- (_Bool)serverCreatesEventChangesForInvitations;
- (_Bool)allowsReminderOnCompletedTasks;
- (_Bool)sendFirstDayOfWeekInRecurrence;
- (_Bool)sendDeviceInfoOnProvision;
- (_Bool)sendUserAgentInDeviceInfo;
- (_Bool)supportsGALPhotos;
- (_Bool)supportsAttendeesInExceptions;
- (_Bool)sendEmailForMeetingInvitationAndResponse;
- (_Bool)processFullMeetingInvitationData;
- (_Bool)sendDTStamp;
- (_Bool)sendUID;
- (_Bool)useStructuredLocation;
- (_Bool)alwaysSendAttendeeRole;
- (_Bool)includeExceptionsInParent;
- (_Bool)useInstanceIdForException;
- (_Bool)useFloatingTimeForAllDayEvents;
- (_Bool)useEmptyRecurrence;
- (_Bool)useEmptyReminderMinutes;
- (_Bool)useEmptyLocation;
- (_Bool)syncSnoozeEvents;
- (_Bool)alwaysSendTimezone;
- (_Bool)supportsMailboxEnhancedSearch;
- (_Bool)supportsForwarderTracking;
- (_Bool)useEmptyAttendees;

@end
