/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIView.h>

#import <CameraEffectsKit/Swift-Protocol.h>

@class JTTextEffectEditorTextView, NSString;

@protocol JTTextEffectEditorViewDelegate;

@interface JTTextEffectEditorView : UIView <Swift>

{
    id <JTTextEffectEditorViewDelegate> _delegate;
    JTTextEffectEditorTextView *_editField;
}

@property (retain, nonatomic) JTTextEffectEditorTextView *editField;
@property (nonatomic, readonly) NSString *text;
@property (weak, nonatomic) id <JTTextEffectEditorViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)selectAll;
- (id)textDraggableView:(id)arg1 itemsForDrag:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textPasteConfigurationSupporting:(id)arg1 shouldAnimatePasteOfAttributedString:(id)arg2 toRange:(id)arg3;
- (void)sharedInit;
- (void)textEffectEditorTextViewDidUnmarkText:(id)arg1;
- (void)endTextEditing;
- (void)applyTextEditingProperties:(id)arg1;
- (struct CGRect)textEditingFrameRelativeToView:(id)arg1;
- (void)CFX_setupTextField;
- (void)CFX_adjustFrameAndTextContainerInsetsForEditField:(id)arg1;
- (void)selectAtEnd;

@end
