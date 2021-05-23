/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString, WBSHistoryItem;

@interface WBSHistoryVisit : NSObject

{
    _Bool _loadSuccessful;
    _Bool _httpNonGet;
    _Bool _synthesized;
    long long _databaseID;
    long long _redirectSourceDatabaseID;
    long long _redirectDestinationDatabaseID;
    long long _generation;
    WBSHistoryItem *_item;
    long long _origin;
    double _visitTime;
    NSString *_title;
    unsigned long long _score;
    unsigned long long _attributes;
    WBSHistoryVisit *_redirectSource;
    WBSHistoryVisit *_redirectDestination;
}

@property (nonatomic) long long databaseID;
@property (nonatomic) long long redirectSourceDatabaseID;
@property (nonatomic) long long redirectDestinationDatabaseID;
@property (nonatomic) long long generation;
@property (weak, nonatomic) WBSHistoryItem *item;
@property (nonatomic) long long origin;
@property (nonatomic, readonly) double visitTime;
@property (copy) NSString *title;
@property (nonatomic) unsigned long long score;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic, getter=loadWasSuccessful) _Bool loadSuccessful;
@property (nonatomic, readonly, getter=wasHTTPNonGet) _Bool httpNonGet;
@property (nonatomic, readonly, getter=isSynthesized) _Bool synthesized;
@property (retain, nonatomic) WBSHistoryVisit *redirectSource;
@property (retain, nonatomic) WBSHistoryVisit *redirectDestination;
@property (nonatomic, readonly) WBSHistoryVisit *endOfRedirectChain;
@property (nonatomic, readonly) unsigned long long redirectSourceChainLength;

+ (unsigned long long)scoreForWeightedVisitCount:(float)arg1;
+ (float)weightedVisitCountFromScore:(unsigned long long)arg1;
+ (id)synthesizedVisitWithHistoryItem:(id)arg1 visitTime:(double)arg2;

- (double)_weight;
- (id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2 loadWasSuccesful:(_Bool)arg3 wasHTTPNonGet:(_Bool)arg4 origin:(long long)arg5 attributes:(unsigned long long)arg6;
- (_Bool)hasAttributes:(unsigned long long)arg1;
- (id)initWithHistoryItem:(id)arg1 sqliteRow:(id)arg2 baseColumnIndex:(unsigned long long)arg3;
- (void)recomputeScore;
- (id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2;

@end
