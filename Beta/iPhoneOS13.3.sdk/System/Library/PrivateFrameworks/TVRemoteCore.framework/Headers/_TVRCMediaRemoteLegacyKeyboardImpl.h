/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString, TVRCKeyboardAttributes, _TVRCMRTelevisionWrapper, _TVRCMediaRemoteKeyboardAdapter, _TVRXKeyboardController;

@interface _TVRCMediaRemoteLegacyKeyboardImpl : NSObject

{
    _Bool _editing;
    _TVRXKeyboardController *_keyboardController;
    _TVRCMRTelevisionWrapper *_television;
    TVRCKeyboardAttributes *_currentAttributes;
    _TVRCMediaRemoteKeyboardAdapter *_adapter;
}

@property (nonatomic) _Bool editing;
@property (retain, nonatomic) TVRCKeyboardAttributes *currentAttributes;
@property (retain, nonatomic) _TVRCMediaRemoteKeyboardAdapter *adapter;
@property (weak, nonatomic) _TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) _TVRCMRTelevisionWrapper *television;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)attributes;
- (id)text;
- (void)setText:(id)arg1;
- (_Bool)isEditing;
- (void)sendReturnKey;
- (void)_textEditingHandlerUpdatedWithEvent:(unsigned int)arg1 session:(id)arg2;
- (void)_sessionDidBegin:(id)arg1;
- (void)_sessionDidEnd:(id)arg1;
- (void)_sessionTextDidChange:(id)arg1;
- (void)_sessionAttributesDidChange:(id)arg1;
- (void)keyboardAdapter:(id)arg1 receivedUnexpectedTextUpdate:(id)arg2;

@end
