/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSDate;

@interface UNSNotificationSchedule : NSObject

{
    NSDate *_previousTriggerDate;
}

@property (retain, nonatomic) NSDate *previousTriggerDate;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (id)_dateFormatter;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
