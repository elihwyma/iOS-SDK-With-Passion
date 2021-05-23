/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <AppleAccountUI/Swift-Protocol.h>

@class AAUIServerHookResponse;

@protocol AAUIServerHookDelegate;

@protocol AAUIServerHook <Swift>

@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (weak, nonatomic) id <AAUIServerHookDelegate> delegate;

- (unsigned short)shouldMatchElement: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldMatchModel: /* Error: Ran out of types for this method. */;
- (unsigned short)processElement:attributes:objectModel:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)processObjectModel:completion: /* Error: Ran out of types for this method. */;

@end
