/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@class NSUserDefaults;

@interface _SiriUICachedPreferences : NSObject

{
    NSUserDefaults *_textInputDefaults;
    _Bool _textInputEnabled;
    _Bool _HTTForTextInputEnabled;
    _Bool _siriMiniIsEnabled;
    _Bool _streamingDictationIsEnabled;
    _Bool _siriSafeForLockScreen;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updatePreferences;
- (_Bool)isTextInputEnabled;
- (_Bool)isHTTForTextInputEnabled;
- (_Bool)isSiriMiniEnabled;
- (_Bool)isStreamingDictationEnabled;
- (_Bool)isSiriSafeForLockScreen;
- (void)_setSiriSafeForLockScreen:(_Bool)arg1;

@end
