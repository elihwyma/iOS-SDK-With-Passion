/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <CoreSuggestions/Swift-Protocol.h>

@protocol SGDSuggestManagerEventsProtocol <Swift>

- (unsigned short)suggestionsFromURL:title:HTMLPayload:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)eventFromUniqueId:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)launchInfoForSuggestedEventWithUniqueIdentifier:sourceURL:clientLocale:ignoreUserActivitySupport:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)launchAppForSuggestedEventUsingLaunchInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)schemaOrgToEvents:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)allEventsLimitedTo:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)isEventCandidateForURL:title:withCompletion: /* Error: Ran out of types for this method. */;

@end
