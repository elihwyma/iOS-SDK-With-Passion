/*
 Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

#import <Foundation/NSObject.h>

@class UIView;

@protocol GlyphMethods, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface LAPKGlyphWrapper : NSObject

{
    _Bool _fastAnimations;
    _Bool _grayedOut;
    UIView *_view;
    UIView<GlyphMethods> *_glyphView;
    UIView<GlyphMethods> *_idleTouchID;
    NSObject<OS_dispatch_queue> *_glyphQueue;
}

@property (nonatomic, readonly) UIView<GlyphMethods> *glyphView;
@property (nonatomic, readonly) UIView<GlyphMethods> *idleTouchID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *glyphQueue;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic) _Bool fastAnimations;
@property (nonatomic) _Bool grayedOut;

+ (id)glyphWithStyle:(long long)arg1 frame:(struct CGRect)arg2;
+ (Class)_loadClassFromString:(id)arg1;
+ (void *)_loadPKUI;

- (void)setState:(long long)arg1 idleTouchID:(_Bool)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithGlyphView:(id)arg1;
- (double)_minimumAnimationDurationForState:(long long)arg1;

@end
