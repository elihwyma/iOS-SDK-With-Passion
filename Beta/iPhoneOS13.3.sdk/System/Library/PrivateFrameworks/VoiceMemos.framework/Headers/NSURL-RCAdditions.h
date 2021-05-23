/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSURL.h>

@interface NSURL (RCAdditions)

- (id)rc_URLByFixingUpPersistentMediaRecordingsDirectory;
- (id)rc_URLByReplacingPathExtensionWithExtension:(id)arg1;
- (id)rc_URLByAppendingStringToLastComponentBasename:(id)arg1;
- (id)rc_URLByStandardizingResolvedPath;

@end
