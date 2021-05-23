/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASProtocol14_1.h>

@interface ASProtocol16_0 : ASProtocol14_1

- (id)protocolVersion;
- (_Bool)supportsAttachments;
- (_Bool)includeCommentInMeetingResponse;
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
- (_Bool)useEmptyAttendees;
- (unsigned char)shortProtocolVersion;

@end
