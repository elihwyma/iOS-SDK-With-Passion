/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSManagedObject.h>

@class NSData, NSString, VCVoiceShortcutManagedObject;

@interface VCVoiceShortcutSyncStateManagedObject : NSManagedObject

@property (nonatomic) _Bool hasSynced;
@property (retain, nonatomic) NSData *metadata;
@property (copy, nonatomic) NSString *syncServiceIdentifier;
@property (retain, nonatomic) VCVoiceShortcutManagedObject *voiceShortcut;

+ (id)fetchRequest;

@end
