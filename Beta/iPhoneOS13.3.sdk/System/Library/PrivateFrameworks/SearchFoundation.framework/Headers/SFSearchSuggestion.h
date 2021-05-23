/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFSearchSuggestion : NSObject <Swift>

{
    struct {
        unsigned int score:1;
        unsigned int type:1;
        unsigned int previouslyEngaged:1;
    } _has;
    _Bool _previouslyEngaged;
    int _type;
    NSString *_identifier;
    NSString *_suggestion;
    NSString *_query;
    double _score;
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
@property (nonatomic) double score;
@property (nonatomic) int type;
@property (copy, nonatomic) NSArray *duplicateSuggestions;
@property (copy, nonatomic) NSString *topicIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) _Bool previouslyEngaged;
@property (copy, nonatomic) NSString *fbr;
@property (copy, nonatomic) NSString *scopedSearchApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *utteranceText;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasScore;
- (_Bool)hasType;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithIdentifier:(id)arg1 suggestion:(id)arg2 query:(id)arg3 score:(double)arg4 type:(int)arg5;
- (id)initWithSuggestion:(id)arg1 query:(id)arg2 score:(double)arg3 type:(int)arg4;
- (_Bool)hasPreviouslyEngaged;

@end
