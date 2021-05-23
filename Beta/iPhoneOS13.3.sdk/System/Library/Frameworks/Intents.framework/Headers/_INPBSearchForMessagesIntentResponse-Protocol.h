/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBSearchForMessagesIntentResponse <Swift>

@property (copy, nonatomic) NSArray *messages;
@property (nonatomic, readonly) unsigned long long messagesCount;
@property (copy, nonatomic) NSArray *searchResults;
@property (nonatomic, readonly) unsigned long long searchResultsCount;

+ (unsigned short)messagesType;
+ (unsigned short)searchResultsType;

- (unsigned short)clearMessages;
- (unsigned short)addMessages: /* Error: Ran out of types for this method. */;
- (unsigned short)messagesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearSearchResults;
- (unsigned short)addSearchResults: /* Error: Ran out of types for this method. */;
- (unsigned short)searchResultsAtIndex: /* Error: Ran out of types for this method. */;

@end
