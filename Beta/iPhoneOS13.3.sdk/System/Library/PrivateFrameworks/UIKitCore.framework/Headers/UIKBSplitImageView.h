/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface UIKBSplitImageView : UIView

{
    _Bool _canStretchAsFullWidth;
    UIImageView *_fullView;
    UIImageView *_splitLeft;
    UIImageView *_splitRight;
    NSString *_currentFilterType;
}

@property (retain, nonatomic) NSString *filterType;

- (void)dealloc;
- (_Bool)_shouldInheritScreenScaleAsContentScaleFactor;
- (void)setContentsMultiplyColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 canStretchAsFullWidth:(_Bool)arg2;
- (void)prepareForDisplay:(_Bool)arg1;
- (void)insertSubviewAtBottom:(id)arg1;
- (void)setImage:(id)arg1 cachedWidth:(double)arg2 keyplane:(id)arg3;
- (void)clearImages;
- (void)setImage:(id)arg1 splitLeft:(id)arg2 splitRight:(id)arg3 keyplane:(id)arg4;

@end
