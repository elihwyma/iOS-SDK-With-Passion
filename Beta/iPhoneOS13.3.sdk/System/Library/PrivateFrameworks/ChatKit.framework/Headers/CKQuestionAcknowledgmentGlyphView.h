/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAcknowledgmentGlyphView.h>

@class CKAcknowledgmentGlyphImageView;

__attribute__((visibility("hidden")))
@interface CKQuestionAcknowledgmentGlyphView : CKAcknowledgmentGlyphView

{
    CKAcknowledgmentGlyphImageView *_glyph;
    CKAcknowledgmentGlyphImageView *_dot;
}

@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *glyph;
@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *dot;

- (void)layoutSubviews;
- (double)animationDuration;
- (void)setGlyphColor:(id)arg1;
- (struct CGPoint)glyphOffset;
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)acknowledgmentType;
- (id)initWithFrame:(struct CGRect)arg1 color:(BOOL)arg2;

@end
