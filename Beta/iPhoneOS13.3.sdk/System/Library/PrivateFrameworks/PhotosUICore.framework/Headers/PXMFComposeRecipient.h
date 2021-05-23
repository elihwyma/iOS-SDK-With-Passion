/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXRecipient.h>

@class MFComposeRecipient;

@interface PXMFComposeRecipient : PXRecipient

{
    MFComposeRecipient *_recipient;
}

@property (nonatomic, readonly) MFComposeRecipient *recipient;

- (id)description;
- (id)initWithContact:(id)arg1 address:(id)arg2 nameComponents:(id)arg3 recipientKind:(long long)arg4;
- (id)initWithRecipient:(id)arg1;

@end
