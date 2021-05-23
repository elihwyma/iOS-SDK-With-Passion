/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSString, PDFKitTextViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFKitTextView : NSObject

{
    PDFKitTextViewPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_setup;
- (id)textView;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect)arg1;
- (id)layer;
- (_Bool)becomeFirstResponder;
- (void)_setFont:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (id)annotation;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)initWithAnnotation:(id)arg1 pdfPageView:(id)arg2 pdfView:(id)arg3;
- (void)_textWidgetDone;
- (void)_setString:(id)arg1;
- (void)_setFontColor:(id)arg1;
- (void)_setAlignment:(long long)arg1;
- (void)_setAttributedString:(id)arg1;
- (void)rotateByAngle:(double)arg1;
- (_Bool)textView:(id)arg1 doCommandBySelector:(SEL)arg2;

@end
