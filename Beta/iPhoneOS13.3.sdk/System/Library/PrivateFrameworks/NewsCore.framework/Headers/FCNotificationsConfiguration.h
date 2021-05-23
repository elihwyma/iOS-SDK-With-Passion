/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface FCNotificationsConfiguration : NSObject

{
    NSArray *_preSubscribedNotificationsChannelIDs;
    NSArray *_recommendedNotificationChannelIDs;
}

@property (copy, nonatomic, readonly) NSArray *preSubscribedNotificationsChannelIDs;
@property (copy, nonatomic, readonly) NSArray *recommendedNotificationChannelIDs;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPresubscribedChannelIDs:(id)arg1 recommendedNotificationChannelIDs:(id)arg2;

@end
