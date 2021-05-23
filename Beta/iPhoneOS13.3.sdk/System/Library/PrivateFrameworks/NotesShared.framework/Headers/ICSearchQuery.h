/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class CSSearchQuery, NSArray, NSDictionary, NSString;

@protocol OS_dispatch_semaphore;

@interface ICSearchQuery : NSObject

{
    _Bool _wasForceStopped;
    _Bool _modernResultsOnly;
    NSDictionary *_queryResults;
    NSString *_highlightString;
    unsigned long long _rankingInterpretation;
    NSString *_queryString;
    NSArray *_rankingQueries;
    CSSearchQuery *_searchQuery;
    NSObject<OS_dispatch_semaphore> *_synchronousSemaphore;
}

@property (copy, nonatomic) NSString *queryString;
@property (retain, nonatomic) NSString *highlightString;
@property (retain, nonatomic) NSArray *rankingQueries;
@property (retain, nonatomic) CSSearchQuery *searchQuery;
@property (retain, nonatomic) NSDictionary *queryResults;
@property (nonatomic) unsigned long long rankingInterpretation;
@property (nonatomic) _Bool modernResultsOnly;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *synchronousSemaphore;
@property (nonatomic) _Bool wasForceStopped;

+ (id)defaultAttributesToReturnFromCoreSpotlight;

- (id)description;
- (void)cancel;
- (void)setup;
- (_Bool)run:(id *)arg1;
- (void)forceStop;
- (id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2 rankingInterpretation:(unsigned long long)arg3 highlightString:(id)arg4 modernResultsOnly:(_Bool)arg5;

@end
