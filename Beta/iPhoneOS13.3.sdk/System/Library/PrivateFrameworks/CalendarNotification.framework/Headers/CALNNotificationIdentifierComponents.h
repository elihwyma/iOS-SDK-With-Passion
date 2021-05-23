/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CALNNotificationIdentifierComponents : NSObject

{
    NSString *_sourceIdentifier;
    NSString *_sourceClientIdentifier;
}

@property (copy, nonatomic, readonly) NSString *sourceIdentifier;
@property (copy, nonatomic, readonly) NSString *sourceClientIdentifier;

- (id)description;
- (id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;

@end
