/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol _UIFocusMovementPerformerDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusMovementPerformer : NSObject

{
    id <_UIFocusMovementPerformerDelegate> _delegate;
}

@property (weak, nonatomic) id <_UIFocusMovementPerformerDelegate> delegate;

- (_Bool)performFocusMovement:(id)arg1;
- (id)_bestCandidateForFocusMovement:(id)arg1;
- (struct CGRect)_minimumSearchAreaForContainer:(id)arg1 inWindow:(id)arg2;
- (id)_findFocusCandidateWithoutLoadingScrollableContent:(id)arg1 forRequest:(id)arg2 minimumSearchArea:(struct CGRect)arg3;
- (id)_itemContainersToCheckForRequest:(id)arg1;
- (id)_findFocusCandidateByExhaustivelySearchingScrollableContainer:(id)arg1 forRequest:(id)arg2;
- (_Bool)_shouldRecordDestinationItemDistanceOffscreenInWindow:(id)arg1;
- (id)_findFocusCandidateBySearchingLinearFocusMovementSequencesForRequest:(id)arg1;
- (id)_nextLinearCandidateLoadingScrollableContentForRequest:(id)arg1;
- (id)_bestCandidateForLinearFocusMovement:(id)arg1;
- (id)_bestCandidateForHierarchicalFocusMovement:(id)arg1;
- (id)_bestCandidateForNonLinearFocusMovement:(id)arg1;
- (struct CGRect)_minimumSearchAreaForContainer:(id)arg1 inWindow:(id)arg2 shouldLoadScrollableContainer:(_Bool)arg3;
- (id)_fakeFocusedViewForFocusMovement:(id)arg1 searchArea:(struct CGRect)arg2;
- (_Bool)_isMovementValidForFocusSequences:(id)arg1;
- (id)viewForFocusHeading:(unsigned long long)arg1 fromView:(id)arg2;

@end
