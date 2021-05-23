/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContactImage, NSString;

@interface CNMeCardSharingResult : NSObject

{
    _Bool _didSaveImageToMeCard;
    NSString *_givenName;
    NSString *_familyName;
    CNContactImage *_contactImage;
}

@property (nonatomic, readonly) NSString *givenName;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) CNContactImage *contactImage;
@property (nonatomic, readonly) _Bool didSaveImageToMeCard;

- (id)description;
- (id)initWithGivenName:(id)arg1 familyName:(id)arg2 contactImage:(id)arg3 didSaveImageToMeCard:(_Bool)arg4;

@end
