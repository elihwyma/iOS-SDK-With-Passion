/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString, TVRCKeyboardAttributes;

@protocol _TVRXKeyboardControllerDelegate, _TVRXKeyboardImpl;

@interface _TVRXKeyboardController : NSObject

{
    id <_TVRXKeyboardControllerDelegate> _delegate;
    id <_TVRXKeyboardImpl> _impl;
}

@property (retain, nonatomic, getter=_impl, setter=_setImpl:) id <_TVRXKeyboardImpl> impl;
@property (weak, nonatomic) id <_TVRXKeyboardControllerDelegate> delegate;
@property (nonatomic, readonly, getter=isEditing) _Bool editing;
@property (nonatomic, readonly) TVRCKeyboardAttributes *attributes;
@property (copy, nonatomic) NSString *text;

- (id)_init;
- (void)_endSession;
- (void)sendReturnKey;
- (void)_editingSessionBeganWithAttributes:(id)arg1;
- (void)_editingSessionEnded;
- (void)_editingSessionUpdatedAttributes:(id)arg1;
- (void)_editingSessionUpdatedText:(id)arg1;
- (void)_beginSessionWithAttributes:(id)arg1;
- (void)sendTextActionPayload:(id)arg1;
- (void)_textActionPayloadGenerated:(id)arg1;

@end
