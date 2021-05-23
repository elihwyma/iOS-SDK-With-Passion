/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UILabel.h>

@interface UITextLabel : UILabel

- (long long)alignment;
- (void)setAlignment:(long long)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (float)minFontSize;
- (void)setMinFontSize:(float)arg1;
- (void)setCentersHorizontally:(_Bool)arg1;
- (_Bool)centersHorizontally;
- (_Bool)wrapsText;
- (struct CGSize)ellipsizedTextSize;
- (void)setHighlightedColor:(id)arg1;
- (id)highlightedColor;
- (void)setWrapsText:(_Bool)arg1;
- (void)setTextAutoresizesToFit:(_Bool)arg1;
- (_Bool)textAutoresizesToFit;

@end
