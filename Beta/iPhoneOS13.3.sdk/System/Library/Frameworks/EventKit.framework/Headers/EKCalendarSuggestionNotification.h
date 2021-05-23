/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKCalendarResourceChangeNotification.h>

@class NSString, SGEvent;

@interface EKCalendarSuggestionNotification : EKCalendarResourceChangeNotification

{
    SGEvent *_suggestedEvent;
    NSString *_originAppName;
}

@property (nonatomic, readonly) NSString *originAppName;
@property (nonatomic, readonly) SGEvent *suggestedEvent;

+ (id)_queue;

- (Class)_SGSuggestionsServiceClass;
- (void)updateSuggestedEventWithEventStore:(id)arg1;

@end
