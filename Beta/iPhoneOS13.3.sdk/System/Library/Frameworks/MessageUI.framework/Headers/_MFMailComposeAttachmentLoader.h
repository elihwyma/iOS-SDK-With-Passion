/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class MFMailMessage;

@interface _MFMailComposeAttachmentLoader : NSObject

{
    MFMailMessage *_message;
    id _content;
    _Bool _isDraft;
    _Bool _didLoadBestAlternative;
    CDUnknownBlockType _completionBlock;
}

- (id)initWithMessage:(id)arg1 content:(id)arg2 isDraft:(_Bool)arg3 didLoadBestAlternative:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)loadAttachments;

@end
