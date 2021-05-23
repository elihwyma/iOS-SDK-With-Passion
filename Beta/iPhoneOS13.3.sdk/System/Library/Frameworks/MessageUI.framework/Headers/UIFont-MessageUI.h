/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIFont.h>

@interface UIFont (MessageUI)

+ (double)mf_defaultComposeFontPixelSize;
+ (id)mf_messageHeaderSenderLabelFont;
+ (id)mf_messageHeaderSummaryLabelFont;
+ (id)mf_messageHeaderTimestampLabelFont;
+ (id)mf_messageHeaderSenderLabelFontForMailActionHeader;
+ (id)mf_messageHeaderSummaryLabelFontForMailActionHeader;

- (struct CGPoint)mf_baselinePointFromOriginPoint:(struct CGPoint)arg1;
- (struct CGPoint)mf_originPointFromBaselinePoint:(struct CGPoint)arg1;
- (struct CGPoint)mf_originPointFromCaplinePoint:(struct CGPoint)arg1;
- (struct CGPoint)mf_caplinePointFromOriginPoint:(struct CGPoint)arg1;
- (struct CGPoint)mf_baselinePointFromCaplinePoint:(struct CGPoint)arg1;
- (struct CGPoint)mf_caplinePointFromBaselinePoint:(struct CGPoint)arg1;
- (struct CGPoint)mf_originPointFromMidlinePoint:(struct CGPoint)arg1;

@end
