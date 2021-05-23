/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <UIView.h>

@class NSString, UIFont, UIImage;

@interface _CertInfoGradientLabel : UIView

{
    NSString *_text;
    UIFont *_font;
    UIImage *_checkImage;
    struct CGColor *_patternColor;
}

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithTrusted:(_Bool)arg1;

@end
