/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class NSAttributedString, NSString, UITextView;

@interface NTKCFaceDetailDescriptionCell : NTKCDetailTableViewCell

{
    UITextView *_textView;
}

@property (retain, nonatomic) UITextView *textView;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reuseIdentifier;

- (id)init;
- (id)_fontDescriptor;
- (void)layoutSubviews;
- (double)rowHeight;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)_fontSizeDidChange;

@end
