/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface CALNNotificationAction : NSObject

{
    NSString *_identifier;
    NSString *_title;
    NSURL *_url;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSURL *url;

+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToAction:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3;

@end
