/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface CKAcknowledgmentGlyphView : UIView

{
    double _animationDuration;
    UIColor *_glyphColor;
    struct CGPoint _glyphOffset;
}

@property (nonatomic, readonly) long long acknowledgmentType;
@property (nonatomic, readonly) struct CGPoint glyphOffset;
@property (nonatomic, readonly) double animationDuration;
@property (retain, nonatomic) UIColor *glyphColor;

+ (id)glyphViewForAcknowledgmentType:(long long)arg1 glyphColor:(BOOL)arg2;
+ (void)cacheGlyphView:(id)arg1;
+ (id)viewCache;

- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1 color:(BOOL)arg2;

@end
