/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface SXFullscreenVideoPlaybackManager : NSObject

{
    _Bool _transitionInProgress;
    _Bool _layoutInProgress;
    NSHashTable *_candidates;
}

@property (nonatomic, readonly) NSHashTable *candidates;
@property (nonatomic) _Bool transitionInProgress;
@property (nonatomic) _Bool layoutInProgress;

- (id)init;
- (void)addCandidate:(id)arg1;
- (void)enterFullscreenIfNeeded;
- (void)removeCandidate:(id)arg1;
- (void)willLayoutAndTransitionToSize:(struct CGSize)arg1;
- (void)didTransitionToSize:(struct CGSize)arg1;
- (void)didLayoutForSize:(struct CGSize)arg1;

@end
