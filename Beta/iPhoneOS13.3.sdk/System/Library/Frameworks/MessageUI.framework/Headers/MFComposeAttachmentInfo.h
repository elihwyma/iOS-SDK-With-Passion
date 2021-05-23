/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MailSupport/MSAttachmentInfo.h>

@class NSString;

@interface MFComposeAttachmentInfo : MSAttachmentInfo

{
    _Bool _isBasicImage;
    _Bool _isDisplayableImage;
    NSString *_className;
}

@property (nonatomic, readonly) _Bool isBasicImage;
@property (nonatomic, readonly) _Bool isDisplayableImage;
@property (copy, nonatomic, readonly) NSString *className;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 filename:(id)arg2 isBasicImage:(_Bool)arg3 isDisplayableImage:(_Bool)arg4 className:(id)arg5;

@end
