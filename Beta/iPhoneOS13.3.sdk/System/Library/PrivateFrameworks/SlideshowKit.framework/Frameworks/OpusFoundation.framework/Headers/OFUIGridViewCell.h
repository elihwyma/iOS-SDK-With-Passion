/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <UIView.h>

@class NSMutableArray, NSString, OFUIGridViewItem, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface OFUIGridViewCell : UIView

{
    NSString *_reuseIdentifier;
    long long _index;
    OFUIGridViewItem *_item;
    NSMutableArray *_operations;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_singleTapRecognizer;
    UITapGestureRecognizer *_selectAllRecognizer;
    _Bool _continuousSelection;
    _Bool _selected;
}

@property (copy, nonatomic, readonly) NSString *reuseIdentifier;
@property (nonatomic) long long index;
@property (retain, nonatomic, readonly) NSMutableArray *operations;
@property (retain, nonatomic) OFUIGridViewItem *item;
@property (retain, nonatomic, readonly) UITapGestureRecognizer *singleTapRecognizer;
@property (retain, nonatomic, readonly) UITapGestureRecognizer *selectAllRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)addOperation:(id)arg1;
- (void)cancelAllOperations;
- (void)setBounds:(struct CGRect)arg1;
- (void)commonInit;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (_Bool)hasOperations;
- (void)handleTap:(id)arg1;
- (id)selectionColor;
- (id)gridView;
- (void)removeOperation:(id)arg1;
- (void)setOperationsPriority:(long long)arg1;
- (void)startDragging:(id)arg1;
- (void)handleSelectAll:(id)arg1;
- (void)_setHighlightedOnCell:(_Bool)arg1;
- (void)showSelectionBorder:(_Bool)arg1;
- (id)newDraggingItem;
- (unsigned long long)countOperations;
- (void)enumerateOperations:(CDUnknownBlockType)arg1;

@end
