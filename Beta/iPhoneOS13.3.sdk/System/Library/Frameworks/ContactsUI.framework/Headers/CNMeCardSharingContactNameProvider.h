/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, NSString;

@interface CNMeCardSharingContactNameProvider : NSObject

{
    CNContact *_contact;
}

@property (nonatomic, readonly) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (id)givenName;
- (id)familyName;
- (id)middleName;
- (id)nickname;
- (id)initWithContact:(id)arg1;

@end
