/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, RTIInputSystemSourceSession, TVRCKeyboardAttributes, _TVRCMRTelevisionWrapper, _TVRXKeyboardController;

@interface _TVRCMediaRemoteRemoteTextInputKeyboardImpl : NSObject

{
    _Bool _editing;
    _TVRXKeyboardController *_keyboardController;
    _TVRCMRTelevisionWrapper *_television;
    RTIInputSystemSourceSession *_currentSession;
    TVRCKeyboardAttributes *_currentAttributes;
    NSDate *_lastSessionTimestamp;
}

@property (nonatomic) _Bool editing;
@property (retain, nonatomic) RTIInputSystemSourceSession *currentSession;
@property (retain, nonatomic) TVRCKeyboardAttributes *currentAttributes;
@property (retain, nonatomic) NSDate *lastSessionTimestamp;
@property (weak, nonatomic) _TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) _TVRCMRTelevisionWrapper *television;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)attributes;
- (id)text;
- (void)setText:(id)arg1;
- (_Bool)isEditing;
- (void)inputSessionDidBegin:(id)arg1;
- (void)inputSessionDidEnd:(id)arg1;
- (void)inputSessionDidDie:(id)arg1;
- (void)handleTextActionPayload:(id)arg1;
- (void)sendReturnKey;
- (void)setTextActionPayload:(id)arg1;
- (void)_stopObservingTelevisionEditingSession;
- (void)_receivedInputSourceSession:(id)arg1;
- (_Bool)_shouldAllowSourceSession;

@end
