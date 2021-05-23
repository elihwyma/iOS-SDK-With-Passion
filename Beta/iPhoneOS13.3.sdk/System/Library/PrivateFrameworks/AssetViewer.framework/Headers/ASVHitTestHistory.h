/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface ASVHitTestHistory : NSObject

{
    unsigned long long _resultCapacity;
    NSMutableArray *_results;
    unsigned long long _decisionCapacity;
    NSMutableArray *_decisions;
}

@property (nonatomic, readonly) unsigned long long resultCapacity;
@property (nonatomic, readonly) NSMutableArray *results;
@property (nonatomic, readonly) unsigned long long decisionCapacity;
@property (nonatomic, readonly) NSMutableArray *decisions;

- (void)clearHistory;
- (void)addResult:(id)arg1;
- (id)initWithResultCapacity:(unsigned long long)arg1 decisionCapacity:(unsigned long long)arg2;
- (void)addDecision:(id)arg1;
- (id)recentDecisionsForCount:(unsigned long long)arg1;
- (id)recentResultsForCount:(unsigned long long)arg1;
- (void)reinitializeDecisionHistoryWithDecision:(id)arg1;

@end
