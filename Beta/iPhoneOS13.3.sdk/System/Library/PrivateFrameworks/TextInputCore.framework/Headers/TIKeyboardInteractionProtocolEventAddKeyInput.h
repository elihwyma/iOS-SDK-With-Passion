/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TIKeyboardInteractionProtocolBase.h>

@class NSString, TIKeyboardInput;

@interface TIKeyboardInteractionProtocolEventAddKeyInput : TIKeyboardInteractionProtocolBase

{
    TIKeyboardInput *_keyboardInput;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)sendTo:(id)arg1;
- (id)initWithKeyInput:(id)arg1 keyboardState:(id)arg2;

@end
