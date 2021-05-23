/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBGraphicalFloat;

@protocol _SFPBSearchSuggestion <Swift>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *suggestion;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) _SFPBGraphicalFloat *score;
@property (nonatomic) int type;
@property (copy, nonatomic) NSArray *duplicateSuggestions;
@property (copy, nonatomic) NSString *topicIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) _Bool previouslyEngaged;
@property (copy, nonatomic) NSString *fbr;
@property (copy, nonatomic) NSString *scopedSearchApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *utteranceText;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addDuplicateSuggestions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearDuplicateSuggestions;
- (unsigned short)duplicateSuggestionsCount;
- (unsigned short)duplicateSuggestionsAtIndex: /* Error: Ran out of types for this method. */;

@end
