/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSectionGeometryTranslator : NSObject

{
    struct CGSize _contentSize;
    int _layoutAxis;
    _Bool _layoutRTL;
    struct NSDirectionalEdgeInsets _supplementaryInsets;
    struct NSDirectionalEdgeInsets _sectionInsets;
    struct CGRect _contentFrame;
    struct CGRect _effectiveFrame;
}

@property (nonatomic, readonly) struct CGSize contentSize;
@property (nonatomic, readonly) struct CGSize auxillaryHostContentSize;
@property (nonatomic, readonly) struct CGSize effectiveContentSize;
@property (nonatomic, readonly) struct CGPoint contentOffset;
@property (nonatomic, readonly) struct CGRect contentFrame;
@property (nonatomic, readonly) struct CGRect effectiveFrame;

- (id)description;
- (id)initWithContentSize:(struct CGSize)arg1 layoutAxis:(int)arg2 layoutRTL:(_Bool)arg3 sectionInsets:(struct NSDirectionalEdgeInsets)arg4 supplementaryInsets:(struct NSDirectionalEdgeInsets)arg5;
- (struct CGRect)contentRectForSectionRect:(struct CGRect)arg1;
- (void)_computeFrames;

@end
