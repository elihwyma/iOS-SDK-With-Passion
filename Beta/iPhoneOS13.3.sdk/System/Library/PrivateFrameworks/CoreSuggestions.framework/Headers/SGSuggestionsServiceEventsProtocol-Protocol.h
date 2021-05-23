/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <CoreSuggestions/Swift-Protocol.h>

@protocol SGSuggestionsServiceEventsProtocol <Swift>

- (unsigned short)launchInfoForSuggestedEventWithUniqueIdentifier:sourceURL:clientLocale:error: /* Error: Ran out of types for this method. */;
- (unsigned short)launchAppForSuggestedEventUsingLaunchInfo:error: /* Error: Ran out of types for this method. */;
- (unsigned short)suggestionsFromURL:title:HTMLPayload:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)isEventCandidateForURL:andTitle:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)eventFromUniqueId:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)allEventsLimitedTo:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)launchInfoForSuggestedEventWithUniqueIdentifier:sourceURL:clientLocale:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)launchAppForSuggestedEventUsingLaunchInfo:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)keysForSchemas:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)eventsForSchemas:usingStore:completion: /* Error: Ran out of types for this method. */;

@end
