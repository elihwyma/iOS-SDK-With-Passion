/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UICollectionSectionSolutionBookmark;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolverBookmarkStateSnapshotter : NSObject

{
    _UICollectionSectionSolutionBookmark *_bookmark;
    long long _originalSectionIndex;
}

@property (nonatomic, readonly) long long originalSectionIndex;

- (id)initWithBookmark:(id)arg1 originalSectionIndex:(long long)arg2;
- (void)applyStateToBookmark:(id)arg1;

@end
