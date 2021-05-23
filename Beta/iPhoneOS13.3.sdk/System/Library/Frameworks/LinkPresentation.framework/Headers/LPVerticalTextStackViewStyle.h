/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPPadding, LPPointUnit, LPTextRowStyle;

__attribute__((visibility("hidden")))
@interface LPVerticalTextStackViewStyle : NSObject

{
    _Bool _shouldAlignToBaselines;
    unsigned int _maximumNumberOfLines;
    LPPointUnit *_firstLineLeading;
    LPPointUnit *_lastLineDescent;
    LPTextRowStyle *_aboveTopCaption;
    LPTextRowStyle *_topCaption;
    LPTextRowStyle *_bottomCaption;
    LPTextRowStyle *_belowBottomCaption;
    LPPadding *_captionTextPadding;
    LPPadding *_emailCompatibleMargin;
}

@property (retain, nonatomic) LPPointUnit *firstLineLeading;
@property (retain, nonatomic) LPPointUnit *lastLineDescent;
@property (nonatomic, readonly) LPTextRowStyle *aboveTopCaption;
@property (nonatomic, readonly) LPTextRowStyle *topCaption;
@property (nonatomic, readonly) LPTextRowStyle *bottomCaption;
@property (nonatomic, readonly) LPTextRowStyle *belowBottomCaption;
@property (nonatomic) unsigned int maximumNumberOfLines;
@property (nonatomic) _Bool shouldAlignToBaselines;
@property (retain, nonatomic, readonly) LPPadding *captionTextPadding;
@property (retain, nonatomic, readonly) LPPadding *emailCompatibleMargin;

- (id)initWithPlatform:(long long)arg1;
- (void)applyToAllTextViewStyles:(CDUnknownBlockType)arg1;

@end
