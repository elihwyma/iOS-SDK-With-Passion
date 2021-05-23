/*
 Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

#import <Spotlight/SPQueryTask.h>

@class NSArray;

@interface SPZKWSearchQuery : SPQueryTask

{
    NSArray *_mutableSections;
    unsigned long long _queryID;
}

@property unsigned long long queryID;

+ (void)initialize;

- (void)start;
- (void)startAtUIPriority:(_Bool)arg1;
- (void)addApplicationResultsFromPredictionResponse:(id)arg1 toSection:(id)arg2 queryIdent:(unsigned long long)arg3;
- (void)startAtUIPriority;
- (id)unsafeSections;
- (id)unsafeSessionEntityString;

@end
