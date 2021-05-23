/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface CNUIFamilyMemberDowntimeContactItem : NSObject

{
    _Bool _selected;
    CNContact *_contact;
    NSString *_label;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic) _Bool selected;

- (id)initWithContact:(id)arg1 label:(id)arg2;

@end
