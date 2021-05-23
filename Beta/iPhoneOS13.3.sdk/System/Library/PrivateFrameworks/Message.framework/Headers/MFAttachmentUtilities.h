/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@interface MFAttachmentUtilities : NSObject

+ (id)temporaryDirectory;
+ (id)writeData:(id)arg1 toTemporaryFileURLWithFileName:(id)arg2;
+ (id)makeAttachmentPlaceholder:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4;
+ (id)securityScopeForFileURL:(id)arg1;
+ (id)_temporaryDirectoryUniqueURL;
+ (id)temporaryFileURLWithExtension:(id)arg1;
+ (id)mimeTypeForFileName:(id)arg1;
+ (_Bool)shouldCreatePlaceholderAttachmentForAttachmentWithSize:(long long)arg1;

@end
