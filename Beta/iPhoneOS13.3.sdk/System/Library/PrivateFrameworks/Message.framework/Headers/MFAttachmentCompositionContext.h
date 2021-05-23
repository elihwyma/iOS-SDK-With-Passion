/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFAttachmentManager, NSArray, NSMutableDictionary, NSString, NSURL;

@interface MFAttachmentCompositionContext : NSObject

{
    NSMutableDictionary *_hostIdentifierToAttachmentContentIDMap;
    NSString *_contextID;
    NSURL *_attachmentsBaseURL;
    MFAttachmentManager *_attachmentsManager;
}

@property (nonatomic, readonly) NSString *contextID;
@property (retain, nonatomic) NSURL *attachmentsBaseURL;
@property (retain, nonatomic) MFAttachmentManager *attachmentsManager;
@property (nonatomic, readonly) NSArray *attachments;

- (id)init;
- (void)dealloc;
- (id)initWithContextID:(id)arg1;
- (void)setHostIdentifier:(id)arg1 forAttachment:(id)arg2;
- (id)attachmentForHostIdentifier:(id)arg1;

@end
