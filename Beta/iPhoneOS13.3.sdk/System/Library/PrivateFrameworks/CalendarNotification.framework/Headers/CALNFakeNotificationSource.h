/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol CALNNotificationManager;

@interface CALNFakeNotificationSource : NSObject

{
    NSString *_sourceIdentifier;
    id <CALNNotificationManager> _notificationManager;
}

@property (nonatomic, readonly) id <CALNNotificationManager> notificationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, readonly) NSArray *categories;

+ (id)_activeSourcesQueue;
+ (id)_activeSources;

- (void)didReceiveResponse:(id)arg1;
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
- (void)refreshNotifications:(id)arg1;
- (id)initWithNotificationManager:(id)arg1 sourceIdentifierSuffix:(id)arg2;
- (void)postFakeNotification;

@end
