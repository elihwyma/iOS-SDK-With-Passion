/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASProtocol2_5.h>

@interface ASProtocol12_1 : ASProtocol2_5

- (id)protocolVersion;
- (_Bool)shouldUseWBXMLProvisioning;
- (_Bool)usesAirSyncBaseNamespace;
- (_Bool)sendAttendeeRole;
- (_Bool)shouldSendClassForFolderItemsSync;
- (_Bool)shouldSendFullContactInfo;
- (_Bool)requiresExplicitlyFalseGetChanges;
- (_Bool)useBooleanFolderItemsSyncDeletesAsMoves;
- (_Bool)serverCreatesEventChangesForInvitations;
- (_Bool)allowsReminderOnCompletedTasks;

@end
