/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface NUNewsFeedTitleViewStyler : NSObject

{
    UIColor *_textColor;
    long long _textAlignment;
}

@property (copy, nonatomic) UIColor *textColor;
@property (nonatomic, readonly) long long textAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)styleTitleText:(id)arg1 styleType:(unsigned long long)arg2 boundingSize:(struct CGSize)arg3;
- (id)initWithTextAlignment:(long long)arg1;
- (id)styleTextAsMessage:(id)arg1 boundingSize:(struct CGSize)arg2;
- (id)styleTextAsTitle:(id)arg1 boundingSize:(struct CGSize)arg2;
- (id)messageLargeFont;
- (id)messageSmallFont;
- (id)titleParagraphStyleWithWrapping:(_Bool)arg1;
- (id)titleExtraLargeFont;
- (void)updateWithTextColor:(id)arg1;

@end
