/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <SpeechRecognitionCommandAndControl/CACSpokenCommand.h>

@class NSDictionary, NSString;

@interface CACSpokenCommandCustom : CACSpokenCommand

{
    NSDictionary *_customProperties;
    NSString *_primaryCommand;
}

@property (readonly) NSDictionary *customProperties;
@property (retain) NSString *primaryCommand;

- (id)description;
- (id)initWithCommandIdentifier:(id)arg1;
- (_Bool)isCustomCommand;
- (void)handleSpokenCommand:(id)arg1;

@end
