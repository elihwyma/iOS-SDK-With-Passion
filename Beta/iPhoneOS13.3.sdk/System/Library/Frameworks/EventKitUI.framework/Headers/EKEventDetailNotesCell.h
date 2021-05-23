/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel, UITextView;

@protocol EKEventDetailNotesCellDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDetailNotesCell : EKEventDetailCell

{
    UILabel *_notesTitleView;
    UITextView *_notesView;
    _Bool _isTruncatingNotes;
    id <EKEventDetailNotesCellDelegate> _noteDelegate;
}

@property (nonatomic, readonly) _Bool isTruncatingNotes;
@property (weak, nonatomic) id <EKEventDetailNotesCellDelegate> noteDelegate;

- (_Bool)update;
- (void)layoutSubviews;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (double)_layoutForWidth:(double)arg1;
- (id)_notesView;
- (id)_notesTitleView;
- (void)setIsTruncatingNotes:(_Bool)arg1;

@end
