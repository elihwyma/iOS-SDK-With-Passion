/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSLayoutManager, NSTextAttachment, UIView;

@interface NSTextAttachmentViewProvider : NSObject

{
    UIView *_view;
    unsigned long long _characterIndex;
    _Bool _tracksTextAttachmentViewBounds;
    NSTextAttachment *_textAttachment;
    NSLayoutManager *_layoutManager;
}

@property (weak) NSTextAttachment *textAttachment;
@property (weak) NSLayoutManager *layoutManager;
@property (readonly) unsigned long long characterIndex;
@property (retain) UIView *view;
@property _Bool tracksTextAttachmentViewBounds;

- (void)dealloc;
- (void)removeView;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (void)loadView;

@end
