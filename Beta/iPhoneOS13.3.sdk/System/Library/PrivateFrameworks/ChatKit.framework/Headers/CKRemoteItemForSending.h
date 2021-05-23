/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class MSMessage, NSData, NSString, NSURL;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CKRemoteItemForSending : NSObject

{
    _Bool _previewIsFullyRealizedByChatKit;
    NSURL *_attachmentURL;
    NSString *_attachmentDescription;
    struct __IOSurface *_previewImage;
    NSURL *_appendedVideoURL;
    NSURL *_appendedBundleURL;
    NSURL *_appendedRichLinkURL;
    NSData *_appendedRichLinkData;
    MSMessage *_appendedMessage;
    struct CGImageBlockSet *_blockSet;
    NSObject<OS_dispatch_semaphore> *_previewCreationSemaphore;
}

@property (nonatomic) struct CGImageBlockSet *blockSet;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *previewCreationSemaphore;
@property (retain, nonatomic) NSURL *attachmentURL;
@property (retain, nonatomic) NSString *attachmentDescription;
@property (nonatomic) struct __IOSurface *previewImage;
@property (nonatomic) _Bool previewIsFullyRealizedByChatKit;
@property (retain, nonatomic) NSURL *appendedVideoURL;
@property (retain, nonatomic) NSURL *appendedBundleURL;
@property (retain, nonatomic) NSURL *appendedRichLinkURL;
@property (copy, nonatomic) NSData *appendedRichLinkData;
@property (copy, nonatomic) MSMessage *appendedMessage;

+ (_Bool)supportsSecureCoding;
+ (_Bool)hasAppendedVideo:(id)arg1;
+ (id)previewQueue;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setPreviewUIImage:(id)arg1;
- (void)beginPreviewCreation;
- (id)initWithAttachmentURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3 blockOnPreviewCreation:(_Bool)arg4;
- (void)waitForPreviewGenerationIfNecessary;
- (id)initWithAttachmentURL:(id)arg1 description:(id)arg2 blockOnPreviewCreation:(_Bool)arg3;
- (id)initWithRichLinkWithURL:(id)arg1 data:(id)arg2;
- (id)initWithMSMessage:(id)arg1;
- (id)previewUIImage;

@end
