/*
 Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

#import <EmojiFoundation/EMFEmojiPreferences.h>

@class NSString, NSXPCConnection;

@interface EMFEmojiPreferencesClient : EMFEmojiPreferences

{
    NSXPCConnection *_connection;
    _Bool _isValid;
    NSString *_machName;
}

@property (retain, nonatomic) NSString *machName;
@property (nonatomic) _Bool isValid;

+ (id)serviceInterface;
+ (id)differentialPrivacyRecorderForEmoji:(id)arg1 usageMode:(id)arg2;

- (void)dealloc;
- (void)_disconnect;
- (void)didDisplaySkinToneHelp;
- (void)writeEmojiDefaults;
- (id)_initWithoutConnection;
- (void)didViewEmojiIndex:(long long)arg1 forCategory:(id)arg2;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2 typingName:(id)arg3;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2;
- (id)initWithMachName:(id)arg1;
- (void)didUseEmoji:(id)arg1;
- (void)createConnectionIfNecessary;

@end
