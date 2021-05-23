/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMessageEntryTextView.h>

@class NSMutableDictionary, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;

@protocol CKMessageEntryRichTextViewDelegate;

@interface CKMessageEntryRichTextView : CKMessageEntryTextView

{
    BOOL _balloonColor;
    _Bool _allowCalloutActions;
    NSMutableDictionary *_mediaObjects;
    NSMutableDictionary *_pluginDisplayContainers;
    NSMutableDictionary *_composeImages;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property (retain, nonatomic) NSMutableDictionary *mediaObjects;
@property (retain, nonatomic) NSMutableDictionary *pluginDisplayContainers;
@property (retain, nonatomic) NSMutableDictionary *composeImages;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic) _Bool allowCalloutActions;
@property (weak, nonatomic) id <CKMessageEntryRichTextViewDelegate> delegate;
@property (nonatomic) BOOL balloonColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (id)pasteConfiguration;
- (void)_showCustomInputView;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)pasteboard;
- (id)attributedTextForCompositionText:(id)arg1;
- (id)compositionText;
- (void)handlePastedString:(id)arg1 toRange:(id)arg2;
- (void)previewDidChange:(id)arg1;
- (id)_compositionFromSelection;
- (void)handleTapOrLongPress:(id)arg1;
- (void)updateComposeImages;
- (id)composeImageForTransferGUID:(id)arg1;
- (void)setCompositionText:(id)arg1;

@end
