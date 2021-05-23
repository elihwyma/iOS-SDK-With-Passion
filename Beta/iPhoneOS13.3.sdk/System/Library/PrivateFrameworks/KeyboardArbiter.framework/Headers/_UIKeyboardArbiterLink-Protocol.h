/*
 Image: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
 */

#import <KeyboardArbiter/Swift-Protocol.h>

@class NSString, _UIKeyboardArbiter;

@protocol _UIKeyboardArbiterLink <Swift>

@property (nonatomic, readonly) NSString *serviceName;
@property (weak, nonatomic) _UIKeyboardArbiter *owner;
@property (nonatomic, readonly) _Bool isAvailable;

- (unsigned short)detach: /* Error: Ran out of types for this method. */;
- (unsigned short)attach: /* Error: Ran out of types for this method. */;
- (unsigned short)connectWithQueue: /* Error: Ran out of types for this method. */;
- (unsigned short)createSceneWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSceneSettings;

@end
