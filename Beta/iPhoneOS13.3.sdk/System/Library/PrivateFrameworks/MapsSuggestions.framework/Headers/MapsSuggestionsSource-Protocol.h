/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/Swift-Protocol.h>

@protocol MapsSuggestionsSourceDelegate;

@protocol MapsSuggestionsSource <Swift>

@property (weak, nonatomic) id <MapsSuggestionsSourceDelegate> delegate;

+ (unsigned short)isEnabled;
+ (unsigned short)disposition;

- (unsigned short)init;
- (unsigned short)stop;
- (unsigned short)start;
- (unsigned short)initWithDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSuggestionEntriesOfType: /* Error: Ran out of types for this method. */;
- (unsigned short)removeEntry:behavior:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)feedbackForEntry:action: /* Error: Ran out of types for this method. */;
- (unsigned short)feedbackForMapItem:action: /* Error: Ran out of types for this method. */;
- (unsigned short)feedbackForContact:action: /* Error: Ran out of types for this method. */;
- (unsigned short)canProduceEntriesOfType: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSuggestionEntries;

@end
