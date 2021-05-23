/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TIKeyboardInteractionProtocolBase.h>

@class NSNumber, NSString;

@interface TIKeyboardInteractionProtocolEventAddDrawInputWithSyllableCount : TIKeyboardInteractionProtocolBase

{
    NSNumber *_syllableCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)sendTo:(id)arg1;
- (id)initWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2;

@end
