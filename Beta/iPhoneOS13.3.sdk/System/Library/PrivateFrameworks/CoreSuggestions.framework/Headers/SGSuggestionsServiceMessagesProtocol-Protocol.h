/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@protocol SGMessagesSuggestionsServiceDelegate;

@protocol SGSuggestionsServiceMessagesProtocol

@property (weak) id <SGMessagesSuggestionsServiceDelegate> delegate;

- (unsigned short)harvestedSuggestionsFromMessages:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)suggestionsFromMessage:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)harvestedSuggestionsFromMessage:bundleIdentifier:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)harvestedSuggestionsFromMessage:options:completionHandler: /* Error: Ran out of types for this method. */;

@end
