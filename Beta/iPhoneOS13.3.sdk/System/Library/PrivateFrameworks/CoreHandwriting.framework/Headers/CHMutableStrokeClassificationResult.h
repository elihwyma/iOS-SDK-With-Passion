/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHStrokeClassificationResult.h>

@class NSMutableDictionary, NSMutableSet;

@interface CHMutableStrokeClassificationResult : CHStrokeClassificationResult

{
    NSMutableDictionary *_strokeClassificationsByStrokeIdentifier;
    NSMutableDictionary *_substrokesByStrokeIdentifier;
    NSMutableSet *_nontextCandidates;
}

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStrokeClassificationsByStrokeIdentifier:(id)arg1 substrokesByStrokeIdentifier:(id)arg2 nontextCandidates:(id)arg3;
- (void)updateNonTextCandidatesByRemovingSupportFromStrokeIdentifier:(id)arg1 skippingCandidatesWithStrokeIdentifier:(id)arg2;
- (void)updateByRemovingStrokeIdentifier:(id)arg1 withRemovedAndClutterStrokeIDs:(id)arg2;
- (void)updateByTransitionedClutterStrokeIdentifier:(id)arg1 withRemovedAndClutterStrokeIDs:(id)arg2;
- (void)updateByAddingNonClutterStroke:(id)arg1 withAllStrokes:(id)arg2 forceText:(_Bool)arg3;
- (void)updateByAddingClutterStroke:(id)arg1;

@end
