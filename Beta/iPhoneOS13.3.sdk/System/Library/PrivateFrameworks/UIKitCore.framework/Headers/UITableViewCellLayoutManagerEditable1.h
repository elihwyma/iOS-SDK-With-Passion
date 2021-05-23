/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewCellLayoutManager.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviewsOfCell:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)detailTextLabelForCell:(id)arg1;
- (id)editableTextFieldForCell:(id)arg1;
- (struct CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2;
- (double)defaultTextFieldFontSizeForCell:(id)arg1;
- (void)_textFieldStartEditing:(id)arg1;
- (void)_textFieldEndEditing:(id)arg1;
- (void)_textFieldEndEditingOnReturn:(id)arg1;
- (void)_textValueChanged:(id)arg1;

@end
