/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICNoteBaseActivityItemSource.h>

@class NSAttributedString, NSString;

@interface ICNoteStringActivityItemSource : ICNoteBaseActivityItemSource

{
    CDUnknownBlockType _attributedStringCreator;
    NSAttributedString *_attributedString;
}

@property (copy, nonatomic) CDUnknownBlockType attributedStringCreator;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)initWithTitle:(id)arg1 attributedStringCreator:(CDUnknownBlockType)arg2;
- (_Bool)allowsAttributedStringForActivityType:(id)arg1;

@end
