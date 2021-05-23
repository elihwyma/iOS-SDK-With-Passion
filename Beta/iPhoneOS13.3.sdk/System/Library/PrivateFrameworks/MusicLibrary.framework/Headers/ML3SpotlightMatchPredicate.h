/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Predicate.h>

@class ML3SpotlightNameCache, NSArray, NSString;

@interface ML3SpotlightMatchPredicate : ML3Predicate

{
    ML3SpotlightNameCache *_names;
    NSArray *_searchProperties;
    NSString *_searchString;
}

@property (nonatomic, readonly) NSString *searchString;

+ (id)predicateWithProperties:(id)arg1 searchString:(id)arg2;

- (void)dealloc;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)spotlightPredicate;
- (id)initWithSearchString:(id)arg1 matchingProperties:(id)arg2;

@end
