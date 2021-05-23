/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSURL, UNSBundleLibrarian, UNSKeyedDictionaryRepository;

@interface UNSAttachmentsRepository : NSObject

{
    UNSKeyedDictionaryRepository *_referencesRepository;
    NSURL *_directoryURL;
    UNSBundleLibrarian *_librarian;
}

+ (id)_sha1HashOfFileAtURL:(id)arg1;

- (void)performMigration;
- (id)allBundleIdentifiers;
- (id)bundleIdentifiersClaimingAttachments;
- (void)ensureIntegrityUsingNotificationIdentifiersForBundleIdentifiers:(id)arg1;
- (_Bool)isRepositoryURL:(id)arg1;
- (void)removeReferenceToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3;
- (_Bool)isValidRepositoryURL:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)moveFileIntoRepositoryFromFileURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3;
- (void)deleteAllFilesForBundleIdentifier:(id)arg1;
- (id)initWithDirectory:(id)arg1 librarian:(id)arg2;
- (id)_attachmentDirectoryForBundleIdentifier:(id)arg1;
- (id)_fileURLForDigestString:(id)arg1 extension:(id)arg2 bundleIdentifier:(id)arg3;
- (unsigned long long)_addReferencesToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3;
- (unsigned long long)_removeReferencesToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3;
- (void)_removeRepositoryURL:(id)arg1;
- (void)_removeAllReferencesForBundleIdentifier:(id)arg1;
- (unsigned long long)_transformNotificationIdentifiersForRepositoryURL:(id)arg1 bundleIdentifier:(id)arg2 usingTransformBlock:(CDUnknownBlockType)arg3;
- (void)_transformAttachmentsForBundleIdentifier:(id)arg1 usingTransformBlock:(CDUnknownBlockType)arg2;
- (void)_performAttachmentReferencesMigration;
- (void)_performAttachmentFilesMigration;
- (void)_performAttachmentRepositoryKeyMigration;
- (void)_performAttachmentReferencesMigrationForBundleIdentifier:(id)arg1;
- (id)_claimedRepositoryURLsForBundleIdentifier:(id)arg1;
- (id)referencesForBundleIdentifier:(id)arg1;

@end
