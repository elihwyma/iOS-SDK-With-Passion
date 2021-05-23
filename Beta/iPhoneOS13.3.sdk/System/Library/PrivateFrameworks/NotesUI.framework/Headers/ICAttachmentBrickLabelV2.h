/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UILabel.h>

@class NSAttributedString, NSString, UIColor;

@interface ICAttachmentBrickLabelV2 : UILabel

{
    _Bool _vibrant;
    _Bool _disableVibrancy;
    struct UIColor *_defaultTextColor;
}

@property (nonatomic) _Bool vibrant;
@property (nonatomic) _Bool disableVibrancy;
@property (retain, nonatomic) UIColor *defaultTextColor;
@property (retain, nonatomic) NSAttributedString *ic_attributedStringValue;
@property (retain, nonatomic) NSString *ic_stringValue;

- (id)text;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (_Bool)allowsVibrancy;

@end
