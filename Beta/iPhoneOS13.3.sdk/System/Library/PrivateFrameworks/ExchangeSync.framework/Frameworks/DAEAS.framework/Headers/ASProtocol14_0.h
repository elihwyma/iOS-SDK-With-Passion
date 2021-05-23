/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASProtocol12_1.h>

@interface ASProtocol14_0 : ASProtocol12_1

- (id)protocolVersion;
- (_Bool)useSmartMailTasks;
- (_Bool)sendEmailInWBXML;
- (_Bool)usesTopLevelStatusCodes;
- (_Bool)fetchAttachmentsWithItemOperations;
- (_Bool)allAttachmentsAreBase64ed;
- (_Bool)sendCalendarInfoInRecurrence;
- (_Bool)sendUserAgentInDeviceInfo;
- (_Bool)supportsAttendeesInExceptions;
- (_Bool)processFullMeetingInvitationData;
- (_Bool)alwaysSendTimezone;
- (unsigned char)shortProtocolVersion;

@end
