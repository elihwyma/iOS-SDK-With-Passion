/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <UserNotifications/UNNotification.h>

@interface UNNotification (AFOpportuneSpeakable)

- (id)speakableIdentifier;
- (id)speakableDate;
- (id)speakableContent;
- (id)speakableDescription;

@end
