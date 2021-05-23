/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <VoiceShortcuts/Swift-Protocol.h>

@class NSString, NSURL;

@protocol VCShortcutSyncService <Swift>

@property (copy, nonatomic, readonly) NSString *syncServiceIdentifier;
@property (copy, nonatomic, readonly) NSURL *directoryURL;

- (unsigned short)requestSync;
- (unsigned short)requestFullResync;

@end
