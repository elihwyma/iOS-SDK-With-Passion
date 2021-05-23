/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@interface ICLegacyAttachment : NSObject

+ (id)contentIDStringFromCIDURL:(id)arg1;
+ (id)attachmentWithContentID:(id)arg1 context:(id)arg2;
+ (void)importLegacyAttachment:(id)arg1 toNote:(id)arg2;
+ (id)typeUTIFromFileURL:(id)arg1 mimeType:(id)arg2;
+ (void)importFileAtURL:(id)arg1 toAttachment:(id)arg2;

@end
