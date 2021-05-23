/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString, UIImage;

@interface NUTextAndGlyph : NSObject

{
    NSAttributedString *_attributedText;
    NSString *_text;
    UIImage *_glyph;
}

@property (nonatomic, readonly) NSAttributedString *attributedText;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) UIImage *glyph;

- (id)init;
- (id)initWithAttributedText:(id)arg1 glyph:(id)arg2;
- (id)initWithAttributedText:(id)arg1 text:(id)arg2 glyph:(id)arg3;
- (id)initWithText:(id)arg1 glyph:(id)arg2;

@end
