/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString;

@interface SANotificationsSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *afterNotificationId;
@property (copy, nonatomic) NSString *priority;
@property (copy, nonatomic) NSString *sourceAppId;
@property (copy, nonatomic) NSNumber *supportsSpokenNotifications;

+ (id)notificationsSearch;
+ (id)notificationsSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
