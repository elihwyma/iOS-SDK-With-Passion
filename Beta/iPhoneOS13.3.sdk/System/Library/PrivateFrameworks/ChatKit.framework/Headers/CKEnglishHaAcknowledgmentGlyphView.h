/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAcknowledgmentGlyphView.h>

@class CKAcknowledgmentGlyphImageView;

__attribute__((visibility("hidden")))
@interface CKEnglishHaAcknowledgmentGlyphView : CKAcknowledgmentGlyphView

{
    CKAcknowledgmentGlyphImageView *_h1;
    CKAcknowledgmentGlyphImageView *_a1;
    CKAcknowledgmentGlyphImageView *_h2;
    CKAcknowledgmentGlyphImageView *_a2;
}

@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *h1;
@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *a1;
@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *h2;
@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *a2;

- (void)layoutSubviews;
- (double)animationDuration;
- (void)setGlyphColor:(id)arg1;
- (struct CGPoint)glyphOffset;
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)acknowledgmentType;
- (id)initWithFrame:(struct CGRect)arg1 color:(BOOL)arg2;

@end
