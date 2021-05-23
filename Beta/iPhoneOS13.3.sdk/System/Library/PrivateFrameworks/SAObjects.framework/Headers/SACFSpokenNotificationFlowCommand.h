/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SACFAbstractClientCommand.h>

@class NSString;

@interface SACFSpokenNotificationFlowCommand : SACFAbstractClientCommand

@property (copy, nonatomic) NSString *notificationID;
@property (nonatomic) _Bool shouldPromptUser;

+ (id)spokenNotificationFlowCommand;
+ (id)spokenNotificationFlowCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
