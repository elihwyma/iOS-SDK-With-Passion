/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITextView.h>

@class NSAttributedString, NSString;

@protocol CKBalloonTextViewInteractionDelegate;

@interface CKBalloonTextView : UITextView

{
    NSAttributedString *_attributedText;
    id <CKBalloonTextViewInteractionDelegate> _interactionDelegate;
}

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (weak, nonatomic) id <CKBalloonTextViewInteractionDelegate> interactionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)textView;

- (void)didMoveToWindow;
- (void)_interactionStartedFromPreviewItemController:(id)arg1;
- (void)_interactionStoppedFromPreviewItemController:(id)arg1;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2 isSingleLine:(_Bool *)arg3;
- (id)_textWithHyphenationAppliedForAttributedText:(id)arg1;

@end
