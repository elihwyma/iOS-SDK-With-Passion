/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSLayoutManager, NSString, UIColor, UIView;

@protocol UITextDragSupporting><UITextDropSupporting;

@interface UILayoutManagerBasedDraggableGeometry : NSObject

{
    UIColor *_previousBackgroundColor;
    long long _geometryOptions;
    UIView<UITextDragSupporting><UITextDropSupporting> *_view;
    NSLayoutManager *_layoutManager;
}

@property (weak, nonatomic, readonly) UIView<UITextDragSupporting><UITextDropSupporting> *view;
@property (weak, nonatomic, readonly) NSLayoutManager *layoutManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long geometryOptions;

- (id)_textStorage;
- (id)_draggableTextInRange:(id)arg1;
- (CDUnknownBlockType)_targetedPreviewProviderForImage:(id)arg1 inRange:(struct _NSRange)arg2;
- (_Bool)_isActualLink:(id)arg1;
- (CDUnknownBlockType)_targetedPreviewProviderForTextInRange:(struct _NSRange)arg1 dismissing:(_Bool)arg2 overrideLifting:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_targetedPreviewProviderForTextInRange:(struct _NSRange)arg1;
- (CDUnknownBlockType)_previewProviderForTextInRange:(struct _NSRange)arg1;
- (struct CGRect)_textRectForRange:(struct _NSRange)arg1 inView:(id)arg2;
- (void)_renderTextInRange:(struct _NSRange)arg1 image:(out id *)arg2 boundingRectangles:(out id *)arg3 forLifting:(_Bool)arg4;
- (struct CGPoint)_textOriginOffsetForRange:(struct _NSRange)arg1 inView:(id)arg2;
- (id)textRangesForAttachmentsInTextRange:(id)arg1;
- (id)textRangeForAttachmentInTextRange:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)draggableObjectsForTextRange:(id)arg1;
- (id)previewForDroppingTextInRange:(id)arg1 toPosition:(id)arg2 inContainerView:(id)arg3;
- (CDUnknownBlockType)targetedPreviewProviderForTextInRange:(struct _NSRange)arg1 dismissing:(_Bool)arg2;
- (id)attributedStringsForTextRanges:(id)arg1;
- (id)performSameViewDropOperation:(id)arg1;
- (id)initWithView:(id)arg1 layoutManager:(id)arg2;

@end
