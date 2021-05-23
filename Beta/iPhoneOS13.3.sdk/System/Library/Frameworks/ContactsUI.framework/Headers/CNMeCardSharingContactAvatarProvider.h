/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNAvatarImageRenderer, CNContact, NSData, NSString;

@interface CNMeCardSharingContactAvatarProvider : NSObject

{
    CNContact *_contact;
    CNAvatarImageRenderer *_renderer;
}

@property (nonatomic, readonly) CNAvatarImageRenderer *renderer;
@property (nonatomic, readonly) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) struct CGRect cropRect;
@property (nonatomic, readonly) NSData *thumbnailImageData;

- (id)initWithContact:(id)arg1;
- (void)generateAvatarImageOfSize:(struct CGSize)arg1 imageHandler:(CDUnknownBlockType)arg2;
- (id)initWithContact:(id)arg1 renderer:(id)arg2;

@end
