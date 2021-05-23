/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface _CNContactVCardNameSummzarizationScope : NSObject

{
    CNContact *_contact;
    NSString *_fullName;
}

@property (nonatomic, readonly) CNContact *contact;
@property (copy, nonatomic, readonly) NSString *fullName;

- (id)initWithContact:(id)arg1 fullName:(id)arg2;

@end
