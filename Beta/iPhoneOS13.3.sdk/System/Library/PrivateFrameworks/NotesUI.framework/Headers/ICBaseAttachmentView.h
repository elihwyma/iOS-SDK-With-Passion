/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIView.h>

@class ICAttachment, ICTextAttachment, NSRegularExpression;

@interface ICBaseAttachmentView : UIView

{
    _Bool _selected;
    ICAttachment *_attachment;
    ICTextAttachment *_textAttachment;
    NSRegularExpression *_highlightPatternRegex;
    struct CGSize _attachmentContentSize;
}

@property (weak, nonatomic) ICAttachment *attachment;
@property (weak, nonatomic) ICTextAttachment *textAttachment;
@property (nonatomic) _Bool selected;
@property (nonatomic) struct CGSize attachmentContentSize;
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)contentSizeCategoryDidChange;
- (void)attachmentPreviewImagesDidUpdate:(id)arg1;
- (id)quickLookTransitionView;
- (void)attachmentDidLoad:(id)arg1;
- (void)attachmentWillBeDeleted:(id)arg1;
- (void)mediaDidLoad:(id)arg1;
- (void)removeKVOObserversForAttachment:(id)arg1;
- (void)addKVObserversForAttachment:(id)arg1;
- (void)willChangeAttachment;
- (void)didChangeAttachment;
- (void)didChangeMedia;
- (void)didChangeMergeableData;
- (void)didChangeAttachmentTitle;
- (void)didSetSelected:(_Bool)arg1;
- (void)didUpdatePreviewImages;
- (void)willDeleteAttachment;
- (void)didChangeSize;
- (void)didScrollOutOfVisibleRange;
- (void)didScrollIntoVisibleRange;
- (_Bool)cancelDidScrollIntoVisibleRange;

@end
