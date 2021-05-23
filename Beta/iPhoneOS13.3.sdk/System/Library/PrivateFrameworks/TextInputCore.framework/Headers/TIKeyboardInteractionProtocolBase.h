/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class TIKeyboardState;

@interface TIKeyboardInteractionProtocolBase : NSObject

{
    TIKeyboardState *_keyboardState;
}

@property (nonatomic, readonly) TIKeyboardState *keyboardState;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyboardState:(id)arg1;

@end
