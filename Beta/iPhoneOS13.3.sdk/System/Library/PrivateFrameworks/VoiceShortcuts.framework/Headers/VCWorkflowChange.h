/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <VoiceShortcuts/VCDatabaseChange.h>

@interface VCWorkflowChange : VCDatabaseChange

{
    unsigned long long _syncHash;
}

@property (nonatomic, readonly) unsigned long long syncHash;

+ (int)messageType;
+ (Class)recordClass;
+ (unsigned long long)syncHashForRecord:(id)arg1;

@end
