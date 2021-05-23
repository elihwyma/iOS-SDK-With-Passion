/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXHeuristicDevice, NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface ATXHeuristicDataSourcesServer : NSObject

{
    ATXHeuristicDevice *_device;
    NSXPCListener *_listener;
}

@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (void)preferredAppForIntentName:(id)arg1 andParameterCombination:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)passesWithStyle:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)birthdaysWithCallback:(CDUnknownBlockType)arg1;
- (void)getEventsWithProminentFeature:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)hourOfDayInteractionProbabilitiesWithContact:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)isDNDActive:(CDUnknownBlockType)arg1;
- (void)travelTimeInfoForEventID:(id)arg1 location:(id)arg2 expectedArrivalDate:(id)arg3 transportType:(id)arg4 localOnlyAfterFirstUpdate:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;
- (void)alarms:(CDUnknownBlockType)arg1;
- (void)obtainOneTimeLocationWithCallback:(CDUnknownBlockType)arg1;
- (void)contentsWithCallback:(CDUnknownBlockType)arg1;
- (void)callNewerThan:(double)arg1 showIncoming:(_Bool)arg2 showOutgoing:(_Bool)arg3 missedOnly:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (void)calendarEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)flightStatusForFlight:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)holidaysFromStartDate:(id)arg1 toEndDate:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)vipsWithCallback:(CDUnknownBlockType)arg1;
- (void)nlEventsWithCallback:(CDUnknownBlockType)arg1;
- (void)bestHandleForContact:(id)arg1 service:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)favoritesWithContacts:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)contactsWithIdentifiers:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)contactsWithName:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)contactsWithEmail:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)contactsWithPhone:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)alarmTimeOfDay:(CDUnknownBlockType)arg1;
- (void)duetInteractionCountForHandles:(id)arg1 sinceDate:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)unreadMessagesWithLimit:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)peopleSuggestionsWithCallback:(CDUnknownBlockType)arg1;

@end
