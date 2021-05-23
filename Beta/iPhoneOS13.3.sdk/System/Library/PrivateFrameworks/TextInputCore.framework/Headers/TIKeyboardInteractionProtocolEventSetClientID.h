/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TIKeyboardInteractionProtocolBase.h>

@class NSString;

@interface TIKeyboardInteractionProtocolEventSetClientID : TIKeyboardInteractionProtocolBase

{
    NSString *_clientID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)sendTo:(id)arg1;
- (id)initWithClientID:(id)arg1 keyboardState:(id)arg2;

@end
