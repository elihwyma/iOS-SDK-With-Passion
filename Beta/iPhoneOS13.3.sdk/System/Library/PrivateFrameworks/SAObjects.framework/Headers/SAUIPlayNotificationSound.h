/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIPlayNotificationSound : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *notificationId;

+ (id)playNotificationSound;
+ (id)playNotificationSoundWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
