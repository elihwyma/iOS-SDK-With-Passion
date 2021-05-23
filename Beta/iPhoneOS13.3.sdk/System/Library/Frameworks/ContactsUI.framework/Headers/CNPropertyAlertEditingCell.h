/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyAlertCell.h>

__attribute__((visibility("hidden")))
@interface CNPropertyAlertEditingCell : CNPropertyAlertCell

+ (_Bool)wantsHorizontalLayout;

- (_Bool)shouldIndentWhileEditing;
- (id)variableConstraints;
- (double)minCellHeight;
- (_Bool)allowsCellSelection;

@end
