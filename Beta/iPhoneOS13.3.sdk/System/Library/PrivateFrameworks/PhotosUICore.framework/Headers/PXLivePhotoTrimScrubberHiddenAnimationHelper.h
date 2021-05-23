/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXLivePhotoTrimScrubberHiddenAnimationHelper : NSObject

{
    long long _hideRequestCounter;
    _Bool _hidden;
    CDUnknownBlockType _animationBlock;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType animationBlock;
@property (nonatomic) _Bool hidden;

- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithAnimationBlock:(CDUnknownBlockType)arg1;
- (void)_setHidden:(_Bool)arg1 animated:(_Bool)arg2 afterDelay:(double)arg3;
- (void)_setHidden:(_Bool)arg1 animated:(_Bool)arg2 withRequstID:(long long)arg3;

@end
