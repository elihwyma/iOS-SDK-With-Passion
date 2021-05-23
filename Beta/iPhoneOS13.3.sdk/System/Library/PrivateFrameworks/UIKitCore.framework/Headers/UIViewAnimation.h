/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, UIView;

__attribute__((visibility("hidden")))
@interface UIViewAnimation : NSObject

{
    _Bool _animateFromCurrentPosition;
    _Bool _shouldDeleteAfterAnimation;
    _Bool _editing;
    _Bool _shouldAnimateShadow;
    _Bool _shouldResetGroupOpacityAfterAnimation;
    _Bool _shouldAllowGroupOpacityAfterAnimation;
    _Bool _shouldClipToBoundsAfterAnimation;
    int _viewType;
    int _curve;
    UIView *_view;
    NSIndexPath *_indexPath;
    double _endAlpha;
    double _startFraction;
    double _endFraction;
    struct CGRect _endRect;
}

@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) int viewType;
@property (nonatomic, readonly) struct CGRect endRect;
@property (nonatomic, readonly) double endAlpha;
@property (nonatomic, readonly) double startFraction;
@property (nonatomic, readonly) double endFraction;
@property (nonatomic, readonly) int curve;
@property (nonatomic, readonly) _Bool animateFromCurrentPosition;
@property (nonatomic, readonly) _Bool shouldDeleteAfterAnimation;
@property (nonatomic, readonly) _Bool editing;
@property (nonatomic) _Bool shouldAnimateShadow;
@property (nonatomic) _Bool shouldResetGroupOpacityAfterAnimation;
@property (nonatomic) _Bool shouldAllowGroupOpacityAfterAnimation;
@property (nonatomic) _Bool shouldClipToBoundsAfterAnimation;

- (id)description;
- (id)initWithView:(id)arg1 indexPath:(id)arg2 viewType:(int)arg3 endRect:(struct CGRect)arg4 endAlpha:(double)arg5 startFraction:(double)arg6 endFraction:(double)arg7 curve:(int)arg8 animateFromCurrentPosition:(_Bool)arg9 shouldDeleteAfterAnimation:(_Bool)arg10 editing:(_Bool)arg11;

@end
