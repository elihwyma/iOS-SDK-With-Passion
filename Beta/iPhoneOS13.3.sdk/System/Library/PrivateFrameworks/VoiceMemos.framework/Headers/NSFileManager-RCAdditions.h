/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (RCAdditions)

- (id)rc_uniqueFileSystemURLWithPreferredURL:(id)arg1 uniquenessFormatString:(id)arg2;
- (_Bool)rc_fileExistsAndIsInValidRecordingURL:(id)arg1;
- (long long)rc_dataProtectionKeyBagState;
- (_Bool)rc_isRestrictedByFileProtectionFromCreatingItemsInDirectory:(id)arg1;
- (_Bool)rc_isRestrictedByFileProtectionFromWritingAtPath:(id)arg1;
- (_Bool)rc_isRestrictedByFileProtectionFromReadingAtPath:(id)arg1;

@end
