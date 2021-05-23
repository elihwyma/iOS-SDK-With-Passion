/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <ITMLKit/IKTextElement.h>

@interface IKTextElement (TVMLKitAdditions)

- (long long)tv_textStyle;
- (id)tv_paragraphStyleForDefaultStyle:(id)arg1 withTextAlignment:(long long)arg2;
- (id)tv_paragraphStyleForDefaultStyle:(id)arg1;
- (id)tv_attributedString;
- (id)tv_attributedStringWithForegroundColor:(id)arg1 textAlignment:(long long)arg2;
- (id)tv_textAttributes;
- (id)tv_associatedViewElement;

@end
