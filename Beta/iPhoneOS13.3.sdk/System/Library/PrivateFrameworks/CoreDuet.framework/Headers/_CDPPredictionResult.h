/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface _CDPPredictionResult : NSObject

{
    NSMutableDictionary *_scoresForMembers;
    NSArray *_rankedMembers;
    double _weight;
}

@property (retain) NSMutableDictionary *scoresForMembers;
@property double weight;

- (void)commonInit;
- (id)rankedMembers:(id)arg1;
- (id)initWithMembers:(id)arg1 andScores:(id)arg2;
- (id)initByMergingPredictionResults:(id)arg1;
- (id)rankedMembers;
- (id)rankedCandidates:(id)arg1;
- (id)rankedMembersPassingThreshold:(double)arg1;

@end
