/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, UICollectionReusableView, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface UICollectionViewAnimation : NSObject

{
    UICollectionReusableView *_view;
    UICollectionViewLayoutAttributes *_finalLayoutAttributes;
    double _startFraction;
    double _endFraction;
    long long _viewType;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_startupHandlers;
    CDUnknownBlockType _animationBlock;
    struct {
        unsigned int animateFromCurrentPosition:1;
        unsigned int deleteAfterAnimation:1;
        unsigned int rasterizeAfterAnimation:1;
        unsigned int resetRasterizationAfterAnimation:1;
        unsigned int updateZIndexAfterAnimation:1;
    } _collectionViewAnimationFlags;
    _Bool _updateZIndexAfterAnimation;
}

@property (nonatomic, readonly) UICollectionReusableView *view;
@property (nonatomic, readonly) long long viewType;
@property (nonatomic, readonly) UICollectionViewLayoutAttributes *finalLayoutAttributes;
@property (nonatomic, readonly) double startFraction;
@property (nonatomic, readonly) double endFraction;
@property (nonatomic, readonly) _Bool animateFromCurrentPosition;
@property (nonatomic, readonly) _Bool deleteAfterAnimation;
@property (nonatomic, readonly) _Bool updateZIndexAfterAnimation;
@property (nonatomic) _Bool rasterizeAfterAnimation;
@property (nonatomic) _Bool resetRasterizationAfterAnimation;

- (id)description;
- (void)start;
- (id)initWithView:(id)arg1 viewType:(long long)arg2 finalLayoutAttributes:(id)arg3 startFraction:(double)arg4 endFraction:(double)arg5 animateFromCurrentPostion:(_Bool)arg6 deleteAfterAnimation:(_Bool)arg7 customAnimations:(CDUnknownBlockType)arg8;
- (void)addStartupHandler:(CDUnknownBlockType)arg1;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithAnimator:(id)arg1;

@end
