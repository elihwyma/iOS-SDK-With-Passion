/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@protocol PGPersonResult;

@interface PGSharingSuggestionResult : NSObject

{
    _Bool _useContactSuggestion;
    id <PGPersonResult> _person;
    double _weight;
    double _sourceWeight;
    NSArray *_sourceNames;
}

@property (nonatomic, readonly) double weight;
@property (nonatomic, readonly) double sourceWeight;
@property (nonatomic, readonly) NSArray *sourceNames;
@property (nonatomic) _Bool useContactSuggestion;
@property (nonatomic, readonly) id <PGPersonResult> person;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (id)suggestionResultWithPerson:(id)arg1 weight:(double)arg2 sourceWeight:(double)arg3 sourceName:(id)arg4;

- (id)description;
- (id)initWithPerson:(id)arg1 weight:(double)arg2 sourceWeight:(double)arg3 sourceName:(id)arg4;
- (void)mergeWithSuggestionResult:(id)arg1;

@end
