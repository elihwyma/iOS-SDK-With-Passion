/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

#import <VoiceShortcutClient/Swift-Protocol.h>

@class INShortcut, NSString;

@protocol INVCVoiceShortcut <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *phrase;
@property (nonatomic, readonly) INShortcut *shortcut;

@end
