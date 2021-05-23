/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class NSString;

@interface PGDayHighlightSharingSuggester <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)suggestionTypes;
+ (id)suggestionSubtypes;
+ (_Bool)shouldSuggestHighlightNode:(id)arg1 loggingConnection:(id)arg2;
+ (_Bool)canSuggestHighlightNodeWithoutPeople:(id)arg1 loggingConnection:(id)arg2;

- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;

@end
