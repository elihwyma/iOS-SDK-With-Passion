/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString, RTIInputSystemSourceSession, TVRCKeyboardAttributes, _TVRCRPCompanionLinkClientWrapper, _TVRXKeyboardController;

@interface _TVRCRapportRemoteTextInputKeyboardImpl : NSObject

{
    _Bool _editing;
    _TVRXKeyboardController *_keyboardController;
    _TVRCRPCompanionLinkClientWrapper *_companionLinkWrapper;
    RTIInputSystemSourceSession *_currentSession;
    TVRCKeyboardAttributes *_currentAttributes;
}

@property (nonatomic) _Bool editing;
@property (retain, nonatomic) RTIInputSystemSourceSession *currentSession;
@property (retain, nonatomic) TVRCKeyboardAttributes *currentAttributes;
@property (weak, nonatomic) _TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) _TVRCRPCompanionLinkClientWrapper *companionLinkWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

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

@end
