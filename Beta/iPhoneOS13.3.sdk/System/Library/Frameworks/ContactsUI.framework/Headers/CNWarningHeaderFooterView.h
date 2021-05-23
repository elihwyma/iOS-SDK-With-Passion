/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactTableViewHeaderFooterView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNWarningHeaderFooterView : CNContactTableViewHeaderFooterView

{
    _Bool _shouldDisplayWarningIcon;
    NSString *_warningText;
}

@property (nonatomic) _Bool shouldDisplayWarningIcon;
@property (retain, nonatomic) NSString *warningText;

+ (id)exclamationMark;

- (void)prepareForReuse;
- (id)warningAttributedText;

@end
