/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFAttachmentComposeManager.h>

@interface MFAttachmentLibraryManager : MFAttachmentComposeManager

- (id)_dataProviderForAttachmentURL:(id)arg1 error:(id *)arg2;
- (void)removeProviderForBaseURL:(id)arg1;
- (void)_messageAttachmentStorageLocationsDidChangeNotification:(id)arg1;
- (id)initWithPrimaryLibrary:(id)arg1;
- (id)attachmentsForMessage:(id)arg1 withSchemes:(id)arg2;

@end
