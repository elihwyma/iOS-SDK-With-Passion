/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/PARRequest.h>

@class NSArray, NSDictionary, NSString, SFSearchSuggestion;

@interface PARSearchRequest : PARRequest

{
    NSString *_queryString;
    NSDictionary *_topics;
    NSString *_l2version;
    NSString *_l3version;
    NSArray *_localContextualSuggestions;
    SFSearchSuggestion *_engagedSuggestion;
    NSArray *_completionCacheSuggestions;
}

@property (copy, nonatomic) NSString *queryString;
@property (retain, nonatomic) SFSearchSuggestion *engagedSuggestion;
@property (retain, nonatomic) NSArray *completionCacheSuggestions;
@property (copy, nonatomic) NSDictionary *topics;
@property (copy, nonatomic) NSString *l2version;
@property (copy, nonatomic) NSString *l3version;
@property (copy, nonatomic) NSArray *localContextualSuggestions;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)nwActivityLabel;

@end
