/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGSharingSuggestionSource : NSObject

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *details;
@property (nonatomic, readonly) double weight;

- (id)description;
- (id)sourceDescription;
- (id)suggestedResultsForInput:(id)arg1 withOptions:(id)arg2;
- (id)suggestionResultWithPerson:(id)arg1;
- (id)suggestionResultWithPerson:(id)arg1 weight:(double)arg2;
- (id)suggestionResultsWithPersons:(id)arg1;
- (_Bool)canRunWithOptions:(id)arg1;
- (_Bool)canRunWithInput:(id)arg1;

@end
