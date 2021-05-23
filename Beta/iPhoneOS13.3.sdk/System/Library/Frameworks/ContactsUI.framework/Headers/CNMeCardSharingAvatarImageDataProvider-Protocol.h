/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/Swift-Protocol.h>

@class NSData;

@protocol CNMeCardSharingAvatarImageDataProvider <Swift>

@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) struct CGRect cropRect;
@property (nonatomic, readonly) NSData *thumbnailImageData;

@end
