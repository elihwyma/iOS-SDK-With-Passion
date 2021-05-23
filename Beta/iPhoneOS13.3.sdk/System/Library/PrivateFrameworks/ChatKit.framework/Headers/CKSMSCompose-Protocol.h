/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/Swift-Protocol.h>

@protocol CKSMSCompose <Swift>

+ (unsigned short)canSendPhotos:videos:audioClips: /* Error: Ran out of types for this method. */;
+ (unsigned short)acceptsMIMEType: /* Error: Ran out of types for this method. */;
+ (unsigned short)maxTrimDurationForAudio;
+ (unsigned short)maxTrimDurationForVideo;

- (unsigned short)setContentText: /* Error: Ran out of types for this method. */;
- (unsigned short)setContentURLs: /* Error: Ran out of types for this method. */;
- (unsigned short)setShareSheetSessionID: /* Error: Ran out of types for this method. */;
- (unsigned short)forceMMS;
- (unsigned short)setGameCenterPickedHandles:playerNames: /* Error: Ran out of types for this method. */;
- (unsigned short)setCanEditRecipients: /* Error: Ran out of types for this method. */;
- (unsigned short)insertData:MIMEType:exportedFilename: /* Error: Ran out of types for this method. */;
- (unsigned short)insertAttachmentWithURL:andDescription: /* Error: Ran out of types for this method. */;
- (unsigned short)setText:subject:addresses:chatGUID:groupName: /* Error: Ran out of types for this method. */;
- (unsigned short)setPendingAddresses: /* Error: Ran out of types for this method. */;
- (unsigned short)disableCameraAttachments;
- (unsigned short)setTextEntryContentsVisible: /* Error: Ran out of types for this method. */;
- (unsigned short)setText:subject:addresses: /* Error: Ran out of types for this method. */;
- (unsigned short)setUICustomizationData: /* Error: Ran out of types for this method. */;
- (unsigned short)setUTIs: /* Error: Ran out of types for this method. */;
- (unsigned short)setPhotoIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)setCloudPhotoIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)insertFilename:MIMEType:exportedFilename:options: /* Error: Ran out of types for this method. */;
- (unsigned short)forceCancelComposition;
- (unsigned short)setGameCenterModeWithPickerBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)insertRichLinkWithURL:andData: /* Error: Ran out of types for this method. */;
- (unsigned short)insertMessage: /* Error: Ran out of types for this method. */;

@end
