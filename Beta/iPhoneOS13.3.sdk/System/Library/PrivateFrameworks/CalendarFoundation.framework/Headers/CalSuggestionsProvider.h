/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@protocol SGSuggestionsServiceEventsProtocol;

@interface CalSuggestionsProvider : NSObject

{
    _Bool _suggestionsFrameworkAvailable;
    NSObject<SGSuggestionsServiceEventsProtocol> *_service;
}

@property (nonatomic) _Bool suggestionsFrameworkAvailable;
@property (retain, nonatomic) NSObject<SGSuggestionsServiceEventsProtocol> *service;

+ (id)defaultProvider;

- (id)init;
- (void)_loadSuggestionsFramework;
- (id)sgEventFromUniqueID:(id)arg1 error:(id *)arg2;
- (void)confirmEventWithSuggestionID:(id)arg1;
- (id)senderForEventWithSuggestionID:(id)arg1;
- (id)sgRecordIDForEventWithSuggestionID:(id)arg1 error:(id *)arg2;
- (id)fakeSGRecordID;
- (void)confirmSGEventWithRecordID:(id)arg1;
- (void)rejectSGEventWithRecordID:(id)arg1;
- (_Bool)eventsFoundInMailEnabled;

@end
