/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@protocol INVCVoiceShortcutClient;

@interface INVoiceShortcutCenter : NSObject

{
    id <INVCVoiceShortcutClient> _voiceShortcutClient;
}

@property (retain, nonatomic, setter=_setVoiceShortcutClient:) id <INVCVoiceShortcutClient> voiceShortcutClient;

+ (void)initialize;
+ (id)sharedCenter;

- (id)init;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_initWithVoiceShortcutClient:(id)arg1;
- (void)getAllVoiceShortcutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setShortcutSuggestions:(id)arg1;

@end
