/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class CNContact, NSAttributedString, PHPerson;

@interface PXPeopleNamePickerItem : NSObject

{
    PHPerson *_person;
    CNContact *_contact;
    NSAttributedString *_title;
    NSAttributedString *_subtitle;
}

@property (readonly) PHPerson *person;
@property (readonly) CNContact *contact;
@property (readonly) NSAttributedString *title;
@property (readonly) NSAttributedString *subtitle;

- (id)initWithPerson:(id)arg1 searchPrefix:(id)arg2;
- (id)initWithContact:(id)arg1 searchPrefix:(id)arg2;

@end
