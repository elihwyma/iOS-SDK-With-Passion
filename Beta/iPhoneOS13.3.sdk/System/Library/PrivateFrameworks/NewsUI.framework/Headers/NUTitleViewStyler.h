/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface NUTitleViewStyler : NSObject

{
    UIColor *_textColor;
}

@property (nonatomic, readonly) UIColor *textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)styleTitleText:(id)arg1 styleType:(unsigned long long)arg2 boundingSize:(struct CGSize)arg3;
- (id)styleTextAsMessage:(id)arg1 boundingSize:(struct CGSize)arg2;
- (id)styleTextAsTitle:(id)arg1 boundingSize:(struct CGSize)arg2;
- (id)messageLargeFont;
- (id)messageSmallFont;
- (id)titleParagraphStyleWithWrapping:(_Bool)arg1;
- (id)initWithTextColor:(id)arg1;
- (id)messageParagraphStyle;
- (id)titleLargeFont;
- (id)titleSmallFont;

@end
