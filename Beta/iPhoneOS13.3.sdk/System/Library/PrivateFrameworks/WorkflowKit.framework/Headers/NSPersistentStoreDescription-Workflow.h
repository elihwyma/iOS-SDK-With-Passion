/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <CoreData/NSPersistentStoreDescription.h>

@interface NSPersistentStoreDescription (Workflow)

+ (id)wf_inMemoryConfiguration;
+ (id)wf_configurationInDirectory:(id)arg1 filename:(id)arg2;
+ (id)wf_voiceShortcutsDirectoryURL;
+ (id)wf_shortcutsConfiguration;
+ (id)wf_legacyVoiceShortcutsConfiguration;

@end
