/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNCardGroupItem.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNPropertyPlaceholderItem : CNCardGroupItem

{
    NSString *_property;
}

@property (retain, nonatomic) NSString *property;
@property (nonatomic, readonly) NSString *title;

- (id)initWithProperty:(id)arg1;

@end
