/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <VoiceShortcuts/VCWorkflowChange.h>

@interface VCVoiceShortcutChange : VCWorkflowChange

+ (int)messageType;
+ (id)recordProperties;
+ (unsigned long long)syncHashForRecord:(id)arg1;

- (_Bool)writeTo:(id)arg1 error:(id *)arg2;
- (_Bool)readFrom:(id)arg1 error:(id *)arg2;

@end
