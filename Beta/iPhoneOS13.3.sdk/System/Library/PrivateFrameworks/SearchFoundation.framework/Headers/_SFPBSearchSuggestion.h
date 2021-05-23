/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBGraphicalFloat;

@interface _SFPBSearchSuggestion : PBCodable <Swift>

{
    _Bool _previouslyEngaged;
    int _type;
    NSString *_identifier;
    NSString *_suggestion;
    NSString *_query;
    _SFPBGraphicalFloat *_score;
    NSArray *_duplicateSuggestions;
    NSString *_topicIdentifier;
    NSString *_bundleIdentifier;
    NSString *_fbr;
    NSString *_scopedSearchApplicationBundleIdentifier;
    NSString *_utteranceText;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addDuplicateSuggestions:(id)arg1;
- (void)clearDuplicateSuggestions;
- (unsigned long long)duplicateSuggestionsCount;
- (id)duplicateSuggestionsAtIndex:(unsigned long long)arg1;

@end
