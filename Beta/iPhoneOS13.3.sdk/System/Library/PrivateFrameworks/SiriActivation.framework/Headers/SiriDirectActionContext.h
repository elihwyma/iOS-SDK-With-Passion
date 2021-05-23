/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <SiriActivation/SiriContext.h>

@class BBBulletin, NSDictionary, UNNotification;

@interface SiriDirectActionContext : SiriContext

{
    NSDictionary *_payload;
    BBBulletin *_bulletin;
    UNNotification *_notification;
}

@property (nonatomic, readonly) NSDictionary *payload;
@property (nonatomic, readonly) BBBulletin *bulletin;
@property (nonatomic, readonly) UNNotification *notification;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (id)bundleId;
- (id)initWithUNNotification:(id)arg1;
- (long long)directActionEvent;
- (id)initWithBBBulletin:(id)arg1;
- (_Bool)isMessagingDirectAction;

@end
