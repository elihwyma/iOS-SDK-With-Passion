/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, NSTextAttachment;

__attribute__((visibility("hidden")))
@interface UITextAttachmentView : UIView

{
    NSTextAttachment *_attachment;
}

@property (weak, nonatomic) NSTextAttachment *attachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (struct CGSize)cellSize;
- (struct CGPoint)cellBaselineOffset;
- (id)contentView;
- (id)initWithContentView:(id)arg1;
- (id)initWithTextAttachment:(id)arg1 image:(id)arg2;

@end
