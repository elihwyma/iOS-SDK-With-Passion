/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSData, NSString;

@protocol MFAttachmentPasteboardRepresentation

@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *mimeType;

@end
