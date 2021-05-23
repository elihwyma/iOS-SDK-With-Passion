/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class EKCalendarSuggestionNotification, NSDate, NSString, NSURL;

@interface CALNSuggestedEventNotificationInfo : NSObject

{
    NSString *_sourceClientIdentifier;
    NSURL *_launchURL;
    NSDate *_expirationDate;
    EKCalendarSuggestionNotification *_suggestionNotification;
}

@property (copy, nonatomic, readonly) NSString *sourceClientIdentifier;
@property (copy, nonatomic, readonly) NSURL *launchURL;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) EKCalendarSuggestionNotification *suggestionNotification;

- (id)description;
- (id)initWithSourceClientIdentifier:(id)arg1 launchURL:(id)arg2 expirationDate:(id)arg3 suggestionNotification:(id)arg4;

@end
